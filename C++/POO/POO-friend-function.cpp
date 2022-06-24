#include <iostream>
using namespace std;
class UsingFriendKeyWord
{
    int a, b;

public:
    void setAandB()
    {
        // private membres a and b
        a = 44;
        b = 55;
    }
    // friend function that can access to private memebres in class
    friend float getMean(UsingFriendKeyWord);
};
float getMean(UsingFriendKeyWord u)
{
    return float((u.a + u.b) / 2.0);
}
int main()
{
    UsingFriendKeyWord uu;
    uu.setAandB();
    cout << "Mean of a and b is : " << getMean(uu) << endl;
    return 0;
}