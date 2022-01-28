#include <iostream>
using namespace std;
class Parent
{
    int age;
    char name[20];

public:
    void get(void);
    void show(void);
};
void Parent::get(void)
{
    cout << "yout name please" << endl;
    cin >> name;
    cout << "your age please" << endl;
    cin >> age;
}
void Parent::show(void)
{
    cout << "Name : " << name << " Age : " << age << endl;
}

// Child class
class Child :public Parent
{
    int child_data;

public:
    void get(void);
    void show(void);
};

void Child::get(void)
{
    Parent::get();
    cout << "Enter a number" << endl;
    cin >> child_data;
}
void Child::show(void)
{
    Parent::show();
    cout << "data " << child_data << endl;
}
int main()
{
    Parent parent;
    Child child;
    child.get();
    child.show();
    return 0;
}