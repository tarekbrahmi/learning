#include <iostream>
using namespace std;
class STUDENT
{
protected:
    int repetation_no;

public:
    void setMemberVariable(int a)
    {
        repetation_no = a;
    };
    void showMemberVariable()
    {
        cout << "Member of virtual base class is : " << repetation_no << endl;
    }
};
class TEST : public virtual STUDENT
{
protected:
    int member1;
    int member2;

public:
    void setMembres(int a, int b)
    {
        member1 = a;
        member2 = b;
    }
    void showMembres(void)
    {
        cout << "Member 1 Of TEST is : " << member1 << endl;
        cout << "Member 2 Of TEST is : " << member2 << endl;
    }
};

class SPORTS : public virtual STUDENT
{
protected:
    int score;

public:
    void setScore(int a)
    {
        score = a;
    }
    void showScore(void)
    {
        cout << "SPORTS score is : " << score << endl;
    }
};
class RESULT : public TEST, public SPORTS
{
private:
    int total;

public:
    void showTotal(void)
    {
        total = score + member2 + member1;
        STUDENT::showMemberVariable();
        TEST::showMembres();
        SPORTS::showScore();
        cout << "Total is : " << total << endl;
    }
};

int main()
{
    RESULT r;
    r.setMemberVariable(44);
    r.setMembres(22, 33);
    r.setScore(1000);
    r.showTotal();
    return 0;
}
