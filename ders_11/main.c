#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i=1,smallestnumber=0,largestnumber=0;

    do{
        printf("%dth number: ",i);
        scanf("%d",&number);

        if(number==0) break;
        if(number<smallestnumber) smallestnumber=number;
        if(number>largestnumber) largestnumber = number;
        i++;
    }while(number!=0);

    printf("\nthe largest number: %d\n",largestnumber);
    printf("\nthe smalles number: %d\n",smallestnumber);



    return 0;
}
