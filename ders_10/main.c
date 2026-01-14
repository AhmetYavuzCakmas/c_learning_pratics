#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    int i= 2;

    while(i<num/2){

        if(num%i!=0){
            printf("%d asal sayi degildir.",num);
            break;
        }
        i++;
    }
    printf("%d asal sayidir",num);
    return 0;
}
