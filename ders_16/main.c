#include <stdio.h>
#include <stdlib.h>

int sumNumber(int,int);

void allNumbers(int mynumber[6]){
    for(int i = 0;i<6;i++){
        printf("%d\n",mynumber[i]);
    }
}

int main()
{
    int mynumbers[6]={1,2,3,4,5,6};
    allNumbers(mynumbers);

    printf("%d function upper ",sumNumber(4,5));

    return 0;
}

int sumNumber(int x,int y){
    return x*y;

}
