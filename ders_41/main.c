#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void myArray(int*, int);

int main()
{
    int numbers[6]={1,45,78,2,35,12};
    int i,size;
    size = sizeof(numbers)/sizeof(numbers[0]);
    printf("previous state:\n");
    printf("---------------\n");
    for(i=0;i<size;i++){
        printf("numbers[%d]:%d\n",i,numbers[i]);
    }
    myArray(numbers,size);
    printf("\nNext status:\n");
    printf("---------------\n");
    for(i=0;i<size;i++){
        printf("numbers[%d]:%d\n",i,numbers[i]);
    }
    return 0;
}

void myArray(int* numbers,int size){
    int j;
    for(j=0;j<size;j++){
        *(numbers+j)*=3;
    }
}
