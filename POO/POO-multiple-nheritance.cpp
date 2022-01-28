#include <iostream>
using namespace std;
class DAD
{
    char name[30];
    int age;

public:
    void getData();
    void showData()
    {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};
void DAD::getData()
{
    cout << "your DAD name please" << endl;
    cin >> name;
    cout << "your DAD age please" << endl;
    cin >> age;
}
class MUM
{
    char name[30];
    int age;

public:
    void getData();
    void showData()
    {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};
void MUM::getData()
{
    cout << "your MUM name please" << endl;
    cin >> name;
    cout << "your MUM age please" << endl;
    cin >> age;
}

class BOY : public DAD, public MUM
{
    char name[30];
    int age;

public:
    void getData()
    {
        DAD::getData();
        MUM::getData();
        cout << "your name please" << endl;
        cin >> name;
        cout << "your age please" << endl;
        cin >> age;
    };
    void showData()
    {
        DAD::showData();
        MUM::showData();
        cout << "Name : " << name << " Age : " << age << endl;
    }
};
int main()
{
    BOY boy;
    boy.getData();
    boy.showData();
    return 0;
}