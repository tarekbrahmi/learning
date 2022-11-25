#include <iostream>
using namespace std;
// macros definition
#define LIMIT 3
// function like macros
#define MIN_VAL(a,b)(a>b?b:a)
#define AREA(h,w)(h*w)
// multiline macros
#define ARRAY 1,\
                2,\
                3
#define ARRAY_SIZE(array)(sizeof array / sizeof *array)
int main()
{
    int x=4;
    int y=5;
    int array_copy[]={ARRAY};
    // using macros in c++
    for (int i = 0; i < ARRAY_SIZE(array_copy); i++)
    {
        printf("copy %d \n",array_copy[i]);
    }
    
    std::cout << "using macros in c++\n";
    std::cout << "LIMIT is "<<LIMIT;
    printf("\nMin value between %d and %d is : %d",x,y,MIN_VAL(x,y));
    printf("\narea is is : %d\n",AREA(x,y));
    return 0;
}