#include <stdio.h>
#include <stdlib.h>
int CeltoFah(int);
int FahtoCel(int);


int main()
{

   char choose;
   int number;
   printf("Fahrenheit -> Celcius icin c\n");
   printf("Celcius -> Fahrenheit icin f\n");
   printf("Seciminizi giriniz: ");
   scanf("%c",&choose);
   switch(choose){
    case 'c':
        printf("Fahrenheit degerini giriniz: ");
        scanf("%d",&number);
        printf("Celcius degeri: %d",FahtoCel(number));
        break;
    case 'f':
        printf("Celcius degerini giriniz: ");
        scanf("%d",&number);
        printf("Fahrenheit degeri: %d",CeltoFah(number));
        break;
    default:
        printf("yanlis degeri girdiniz...");

   }


    return 0;
}

int CeltoFah(int c){
    return (c*9/5+32);
}

int FahtoCel(int f){
    return (((f-32))*5/9);
}
