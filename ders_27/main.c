#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sortIt();
void writeTheArray();

int numbers[7];
int i;

int main()
{
   printf("enter array number: ");
    for(i= 0;i<7;i++){
        scanf("%d",&numbers[i]);
    }
    printf("\n before sorting\n");
    writeTheArray();
    printf("\n the array is sorting...\n");
    sortIt();
    printf("\n after sorting..\n");
    writeTheArray();
    return 0;
}

void sortIt(){
    int j,reverse;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(numbers[j]<numbers[i]){
                reverse = numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=reverse;

            }
        }
    }

}


void writeTheArray(){
    for(i=6;i>=0;i--){
        printf("%d\n",numbers[i]);
    }
    printf("\n");

}

void writeTheArrayReverse(){
    for(i=6;i>=0;i--){
        printf("%d\n ",numbers[i]);
    }
    printf("\n");
}
