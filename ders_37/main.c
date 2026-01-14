#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char name = 'f';
    char* ptr = &name;
    printf("pointer:%x\n",ptr);//e2dff937
    ptr++; //int olsaydý 4 byte artardý
    printf("increase pointer:%x\n",ptr);//e2dff938







    return 0;
}



