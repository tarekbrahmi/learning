#include <iostream>
#include <stdio.h>

using namespace std;
const int len = 80;
class employee
{
private:
    char name[len];
    int number;

public:
    void get_data()
    {
        cout << "\n Enter employee name: ";
        cin >> name;
        cout << "\n Enter employee number: ";
        cin >> number;
    }
    void put_data()
    {
        cout << " \n\n Employee name: " << name;
        cout << " \n\n Employee number: " << number;
    }
};
class manager
{
private:
    char dept[len];
    int numemp;
    employee emp;

public:
    void get_data()
    {
        emp.get_data();
        cout << " \n Enter department: ";
        cin >> dept;
        cout << "\n Enter number of employees: ";
        cin >> numemp;
    }
    void put_data()
    {
        emp.put_data();
        cout << " \n\n Department: " << dept;
        cout << " \n\n Number of employees: " << numemp;
    }
};
class scientist
{
private:
    int pubs, year;
    employee emp;

public:
    void get_data()
    {
        emp.get_data();
        cout << " \n Number of publications: ";
        cin >> pubs;
        cout << " \n Year of publication: ";
        cin >> year;
    }
    void put_data()
    {
        emp.put_data();
        cout << "\n\n Number of publications: " << pubs;
        cout << "\n\n Year of publication: " << year;
    }
};
int main()
{
    manager m1;
    scientist s1;
    int ch;
    do
    {
        cout << "\n 1.manager\n 2.scientist\n";
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Manager data:\n";
            m1.get_data();
            cout << "\n Manager data:\n";
            m1.put_data();
            break;
        case 2:
            cout << " \n Scientist data:\n";
            s1.get_data();
            cout << " \n Scientist data:\n";
            s1.put_data();
            break;
        }
        cout << "\n\n To continue Press 1 -> ";
        cin >> ch;
    } while (ch == 1);
    cin >> ch;
    return 0;
}