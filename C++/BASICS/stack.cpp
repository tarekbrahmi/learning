#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> stack_strings;
    stack_strings.push("Python3");
    stack_strings.push("C++");
    stack_strings.push("Java");
    // loop throw the stack `LAST in FIRST out`
    while (!stack_strings.empty())
    {
        cout << stack_strings.top() << endl;
        stack_strings.pop();
    }

    return 0;
}