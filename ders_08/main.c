#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float sqrt_num;
    printf("Enter a number\n");
    scanf("%d",&num);
    sqrt_num = sqrt(num);
    int int_sqrt = (int)sqrt_num;

    if(int_sqrt*int_sqrt==num){
        printf("true");
    }else{
        printf("false");
    }


    return 0;
}
