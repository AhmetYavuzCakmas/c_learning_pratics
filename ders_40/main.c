#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char myLetter[5] = {'x','y','z','d','e'};
    int myNumber[5] = {1,2,3,5,6,8};
    int i;
    printf("myLetter array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myLetter[%d]:%c\n",i,*(myLetter+i));
    }
    printf("myNumber array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myNumber[%d]:%d\n",i,*(myNumber+i));
    }
    printf("myLetter array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myLetter[%d]:%x\n",i,(myLetter+i));
    }
    printf("myNumber array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myNumber[%d]:%x\n",i,(myNumber+i));
    }

    return 0;
}
