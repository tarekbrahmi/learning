#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter tow numbres" << endl;
    cin>>a>>b;
    try
    {
        if(b==0){
            throw b;
        }else{
            cout<<a/b;
        }
    }
    catch(int x)
    {
        std::cerr << "Cann not devize by 0"<< endl;
    }
    
    return 0;
}