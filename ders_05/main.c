/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0,number,sum=0;

    while(i<4){
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",&number);
        sum+=number;
        i++;
    }

    printf("toplam : %d\n",sum);
    float mean = (float)sum/4;
    printf("ortalama : %f",mean);

    return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,average;
    printf("4 adet sayi giriniz: \n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    average = (a+b+d+c)/4;
    printf("ortalama : %.2f",average);



    return 0;
}
