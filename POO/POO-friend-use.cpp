#include <iostream>
using namespace std;
class Account1;
class Account2
{
private:
    int balance;

public:
    Account2() { balance = 33; };
    void showBalance2() { cout << "Balance 2 is now " << balance << endl; }
    friend int transfert(Account1 &acc1, Account2 &acc2, int mount);
};
class Account1
{
private:
    int balance;

public:
    Account1() { balance = 90; };
    void showBalance1();
    friend int transfert(Account1 &acc1, Account2 &acc2, int mount);
};
int transfert(Account1 &acc1, Account2 &acc2, int mount)
{
    if (mount < acc1.balance)
    {
        acc2.balance += mount;
        acc1.balance -= mount;
        return 0;
    }
    else
    {
        return -1;
    }
}
void Account1::showBalance1()
{
    {
        cout << "Balance 1 is now " << balance << endl;
    }
}

int main()
{
    Account1 acc1;
    Account2 acc2;
    cout << "Balances before transfert" << endl;
    acc1.showBalance1();
    acc2.showBalance2();
    cout << "Balances after transfert" << endl;
    transfert(acc1, acc2, 33);
    acc1.showBalance1();
    acc2.showBalance2();
    return 0;
}