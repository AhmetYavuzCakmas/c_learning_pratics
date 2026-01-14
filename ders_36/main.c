#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int x = 7;
    int* ptr = &x;
    printf("x:%d\n",x);//x = 7  ile *ptr=7 aynı şey
    printf("x variable address:%x\n",&x);//671ff77c x in adresi
    printf("x variable address:%x\n",ptr);//671ff77c x in adresi
    printf("ptr variable address:%x\n",&ptr);//671ff770  x i tutan pointerin adresi
    printf("x variable:%d\n",*ptr);//7

    // adrese giderek değer değişiklik yapılabilir
    *ptr =19;// pointer de tutulan adrese gider oradaki variable i(x sayısnı) değiştirir.

    printf("x change variable:%d\n",*ptr);//19

    return 0;
}
