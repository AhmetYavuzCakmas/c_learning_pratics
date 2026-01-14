#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void summary(char*);
int main()
{
    char message[100];
    puts("enter a sentences:");
    gets(message);
    summary(message);

    return 0;
}

void summary(char* ptr){

    int i=0;

    while(*(ptr+i)!='\0'){

        if(i==0) {
            if(*ptr >= 'a' && *ptr <= 'z') {
                putchar(*ptr - 32); // Küçük harfi büyük harfe çevir
            } else {
                putchar(*ptr); // Büyük harf veya baþka karakterse olduðu gibi yazdýr
            }
}
        if(*(ptr+i)==' '){
            if(*ptr+1>='a' && *ptr+1<='z'){
                putchar(*(ptr+i+1)-32);
            }else{
                putchar(*ptr+i+1);
            }
        }
    i++;
    }

}
