#include <iostream>
#include <array>
#include <stdexcept>
#include <stdio.h>
#include <string>
#include <cstdio>

using namespace std;
#define PATH_CORE_0 "/sys/class/thermal/thermal_zone0/temp" // Core 0
#define PATH_CORE_2 "/sys/class/thermal/thermal_zone2/temp" // Core 1
#define PATH_CPU_STATE "/proc/stat"
class UTIL
{
public:
    string trim(string str)
    {
        str.erase(str.find_last_not_of(" \t\r\v\n"));
        str.erase(0, str.find_first_not_of(" \t\r\v\n"));
        return str;
    }
};
class CMD
{

public:
    CMD()
    {
    }
    string exec(char *cmd)
    {
        // cout << "command :" << cmd << endl;
        array<char, 128> buffer;
        string result;
        FILE *fp = popen(cmd, "r");
        if (fp == NULL)
        {
            throw runtime_error("failed to execute commande");
        }
        while (fgets(buffer.data(), buffer.size(), fp) != nullptr)
        {
            result += buffer.data();
        }
        int status = pclose(fp);
        if (status == -1)
        {
            throw runtime_error("failed to execute commande");
        }
        return result;
    }
};
class CPU_USAGE : public CMD
{
public:
    CPU_USAGE(){};
    double CPU_usage_V2(unsigned long long &cpu_sum, unsigned long long &cpu_idle)
    {
        double percent = 0;
        unsigned long long user, nice, system, idle, iowait, irq, softirq;
        unsigned long long _cpu_sum = 0;
        unsigned long long _cpu_idle = 0;
        unsigned long long cpu_delta = 0;
        unsigned long long cpu_used = 0;

        FILE *file = fopen(PATH_CPU_STATE, "r");
        fscanf(file, "cpu %llu %llu %llu %llu %llu %llu %llu", &user, &nice,
               &system, &idle, &iowait, &irq, &softirq);
        fclose(file);
        // callc the summ
        _cpu_sum = user + nice + system + idle + iowait + irq + softirq;
        _cpu_idle = idle - cpu_idle;

        // calc cpu_delta
        cpu_delta = _cpu_sum - cpu_sum;

        // calc cpu_used
        cpu_used = cpu_delta - _cpu_idle;

        percent = cpu_used;
        percent /= cpu_delta;
        percent *= 100;
        cout << "usage percent " << percent << endl;
        // save the value
        cpu_sum = _cpu_sum;
        cpu_idle = idle;

        return percent;
    }
};

int main()
{
    char cmd_tump[255];
    char cmd_sleep[255] = "/usr/bin/sleep 1";
    sprintf(cmd_tump, "%s %s", "/usr/bin/cat", PATH_CORE_0);

    CMD CPU_CMD = CMD();
    CPU_USAGE _CPU_USAGE = CPU_USAGE();
    UTIL util = UTIL();
    unsigned long long cpu_sum = 0;
    unsigned long long cpu_idle = 0;

    while (true)
    {

        _CPU_USAGE.CPU_usage_V2(cpu_sum, cpu_idle);
        // CPU_CMD.exec(cmd_sleep);
    }

    return 0;
}
