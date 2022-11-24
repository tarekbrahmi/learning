#include <iostream>
#include <cstdio>
using namespace std;
class PERSON
{   
    // private variable memebres
    int age;
    char name[2];
    // static variable memebres


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
    PERSON persons[2];
    int i = 0;
    while (i < 2)
    {
        cout << "Enter data for person " << i + 1 << endl;
        persons[i].setData();

        i++;
    }
    int j = 0;
    while (j < 2)
    {
        cout << "data for person " << j + 1 << endl;
        persons[j].displayData();
        j++;
    }
    return 0;
}