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

// Child class level1
class Child : public Parent
{
    int child_data;

public:
    void get(void);
    void show(void);
};

void Child::get(void)
{
    Parent::get();
    cout << "Enter a number for child 1" << endl;
    cin >> child_data;
}
void Child::show(void)
{
    Parent::show();
    cout << "data 1 " << child_data << endl;
}

// Child class level2
class Child2 : public Child
{
    int child2_data;

public:
    void get(void);
    void show(void);
};

void Child2::get(void)
{
    Child::get();
    cout << "Enter a number for child 2" << endl;
    cin >> child2_data;
}
void Child2::show(void)
{
    Child::show();
    cout << "data 2 " << child2_data << endl;
}
int main()
{
    Child2 child;
    child.get();
    child.show();

    return 0;
}