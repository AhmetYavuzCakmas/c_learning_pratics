#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minute,extra_minute;
    float sum=0;
    printf("Kac dakika konustunz? ");
    scanf("%d",&minute);

    if(minute<=4){
        printf("Odemeniz gereken tutar 4 TL");
    }else{
        extra_minute = minute-4;
        sum = 4+(extra_minute*0.07);
        printf("Odemeniz gereken tutar: %.2f TL",sum);

    }

    return 0;
}
