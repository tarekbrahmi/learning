#include <iostream>
using namespace std;
// marcos definition
#define LIMIT 3
// function like marcos
#define MIN_VAL(a,b)(a>b?b:a)
#define AREA(h,w)(h*w)
// multiline marcos
#define ARRAY 1,\
                2,\
                3
#define ARRAY_SIZE(array)(sizeof array / sizeof *array)
int main()
{
    int x=4;
    int y=5;
    int array_copy[]={ARRAY};
    // using marcos in c++
    for (int i = 0; i < ARRAY_SIZE(array_copy); i++)
    {
        printf("copy %d \n",array_copy[i]);
    }
    
    std::cout << "using marcos in c++\n";
    std::cout << "LIMIT is "<<LIMIT;
    printf("\nMin value between %d and %d is : %d",x,y,MIN_VAL(x,y));
    printf("\narea is is : %d\n",AREA(x,y));
    return 0;
}