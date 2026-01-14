#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int arraynumber,i;

    printf("enter array number: ");
    scanf("%d",&arraynumber);
    int numbers[arraynumber];

    printf("enter number of array : ");
    for(i= 0;i<arraynumber;i++){
        scanf("%d",&numbers[i]);
    }
    for(i= 0;i<arraynumber;i++){
        if(numbers[i]%2==0){
            printf("cift sayilar:\n%d\n",numbers[i]);
        }else{
            printf("tek sayilar:\n%d\n",numbers[i]);
        }
    }
    return 0;
}
