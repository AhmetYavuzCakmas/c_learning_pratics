#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,birler,onlar;
    printf("enter a number:\n ");
    scanf("%d",&number);
    birler = number%10;
    onlar = (number%100)/10;
    printf("birler basamagi: %d--onlar basamagi: %d",birler,onlar);
    return 0;
}
