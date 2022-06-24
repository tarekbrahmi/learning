#include <iostream>
using namespace std;
class Parent
{
    char name[33];
    int age;

public:
    void setData()
    {
        cout << "your PArent name please" << endl;
        cin >> name;
        cout << "your PArent age please" << endl;
        cin >> age;
    }
    void showData()
    {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};
class BOY : public Parent
{
    char name[33];
    int age;

public:
    void setDataBoy()
    {
        Parent::setData();
        cout << "your name please" << endl;
        cin >> name;
        cout << "your age please" << endl;
        cin >> age;
    }
    void showData()
    {
        Parent::showData();
        cout << "Name of boy : " << name << " Age of boy : " << age << endl;
    }
};
class GIRL : public Parent
{
    char name[33];
    int age;

public:
    void setDataGIRL()
    {
        Parent::setData();
        cout << "your name please" << endl;
        cin >> name;
        cout << "your age please" << endl;
        cin >> age;
    }
    void showData()
    {
        Parent::showData();
        cout << "Name of GIRL : " << name << " Age of GIRL : " << age << endl;
    }
};
int main()
{
    BOY boy;
    GIRL girl;
    boy.setDataBoy();
    boy.showData();
    girl.setDataGIRL();
    girl.setDataGIRL();
    return 0;
}
