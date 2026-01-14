#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("enter the sides of the triangle: \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 && num1==num3 && num2==num3){
        printf("eskenar ucgendir");
    }else if(num1==num2 || num1==num3 || num2==num3){
        printf("ikizkenar ucgendir");
    }else{
        printf("çesitkenar ucgendir");
    }

    return 0;
}
