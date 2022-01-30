#include <iostream>
using namespace std;
template <class T>
void __swap(T &x, T &y)
{
    T z;
    z = x;
    x = y;
    y = z;
}
template <class T>
int __max(T &x, T &y)
{
    return (x > y) ? x : y;
}
int main()
{
    char ch1, ch2;
    cout << "enter two characters :" << endl;
    cin >> ch1 >> ch2;
    __swap(ch1, ch2);
    cout << "Max is : " << __max(ch1, ch2) << endl;
    cout << ch1 << ch2;

    int a, b;
    cout << "enter a, b :" << endl;
    cin >> a >> b;
    __swap(a, b);
    cout << "Max is : " << __max(a, b) << endl;
    cout << a << b;

    float p, q;
    cout << "enter p, q :" << endl;
    cin >> p >> q;
    __swap(p, q);
    cout << "Max is : " << __max(p, q) << endl;
    cout << p << q;

    return 0;
}