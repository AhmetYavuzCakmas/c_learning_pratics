#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void upperToLower(char*);
void lowerToUpper(char*);

int main()
{

    char message[100];
    int choice;
    printf("Bir secim yapiniz:\n1- buyuk harften kucuk harfe cevir.\n2- kucuk harften buyuk harfe cevir.\n");
    scanf("%d",&choice);
    getchar();//bunu scanf ten sonra gets kullandýysan kullanmalýsýn yoksa cümleyi giremezsin.

    switch(choice){
        case 1: puts("Buyuk harflerden olusan cumleyi giriniz:");
                gets(message);
                upperToLower(message);
                break;
        case 2: puts("Kucuk harflerden olusan cumleyi giriniz:");
                gets(message);
                lowerToUpper(message);
                break;
        defult: puts("Yanlis secim...");
    }


    return 0;
}

void upperToLower(char* ptr){
    for(;*ptr != '\0';ptr++){
        if(*ptr>='A' && *ptr<='Z'){
            putchar(*ptr+32);
        }else{
            putchar(*ptr);
        }
    }
}

void lowerToUpper(char* ptr){
    for(;*ptr != '\0';ptr++){
        if(*ptr>='a' && *ptr<='z'){
            putchar(*ptr-32);
        }else{
            putchar(*ptr);
        }
    }
}

