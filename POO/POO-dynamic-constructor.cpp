#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
    char *value;
    int length;

public:
    MyString()
    {

        length = 0;
        value = new char[length + 1];
    }
    MyString(const char *s)
    {
        length = strlen(s);
        value = new char[length + 1];
        strcpy(value, s);
    }
    void display(void)
    {
        cout << "Value of string : " << value << endl;
    }
    void join(MyString &s1, MyString &s2)
    {
        length = s1.length + s2.length;
        delete value;
        value = new char[length + 1];
        strcpy(value, s1.value);

        strcat(value, " ");
        strcat(value, s2.value);
    }
};
int main()
{
    const char * fi="tarek";
    MyString test(fi), hello("hello"),s1;
    s1.join(test,hello);
    s1.display();
    return 0;
}