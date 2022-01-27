#include <iostream>
using namespace std;
class MyTime
{
    int hours, minutes;

public:
    void setMyTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void getMyTime()
    {
        cout << "Hours : " << hours << " Minutes : " << minutes << endl;
    }
    void summTime(MyTime, MyTime);
};
void MyTime::summTime(MyTime t1, MyTime t2)
{
    minutes = t1.minutes + t2.minutes;

    hours = minutes / 60;

    minutes = minutes % 60;

    hours = hours + t1.hours + t2.hours;
}
int main()
{
    MyTime T1, T2, T3;
    T1.setMyTime(3, 54);
    T2.setMyTime(4, 44);
    T3.summTime(T1, T2);
    cout << "T1 :";
    T1.getMyTime();
    cout << "T2 :";
    T2.getMyTime();
    cout << "T3 :";
    T3.getMyTime();
    return 0;
}