#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int number[7],i;

    printf("enter array number: ");
    for(i= 0;i<7;i++){
        scanf("%d",&number[i]);
    }

    printf("\nOriginal order: \n");
    for(i = 0;i<7;i++){
        printf("%d\n",number[i]);
    }

    printf("\n Reverse order: \n");
    for(i=6;i>=0;i--){
        printf("%d\n",number[i]);
    }



    return 0;
}
