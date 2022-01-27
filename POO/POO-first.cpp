#include <iostream>
#include <cstdio>
using namespace std;
class PERSON
{
    int age;
    char name[2];

private:
    char summray[];

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
    sprintf(summray,"Name %s age %d", name, age);
    cout << summray << endl;
}
int main()
{
    PERSON persons[1];
    int i = 0;
    while (i < 1)
    {
        cout << "Enter data for person " << i + 1 << endl;
        persons[i].setData();

        i++;
    }
    int j = 0;
    while (j < 1)
    {
        cout << "data for person " << j + 1 << endl;
        persons[j].displayData();
        j++;
    }
    return 0;
}