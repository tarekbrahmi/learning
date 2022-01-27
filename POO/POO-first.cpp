#include <iostream>
using namespace std;
class PERSON
{
    int age;
    char name[33];

public:
    void setData(void);
    void displayData(void);
};
// define functions
void PERSON::displayData(void)
{
    cout << "Name : " << name << " Age : " << age << endl;
};
void PERSON::setData(void)
{
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter age" << endl;
    cin >> age;
}
int main()
{
    PERSON p;
    p.setData();
    p.displayData();
    return 0;
}