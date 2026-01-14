#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//YARIM KALDI

char* getCapitalWord(char*);
int main()
{
    char message[100];
    puts("Cumleyi giriniz: ");
    gets(message);

    char* result= getCapitalWord(message);
    printf("%s",result);

    return 0;
}

char* getCapitalWord(char* sentence){
    char capitalWord[30];

    if(*sentence>='a' && *sentence<='z'){
            putchar(*sentence-32);
            capitalWord[0]=*sentence;
        }
    for(int i=1;*sentence != '\0';i++){
        if(*sentence ==' '){
            if(*sentence+1>='a' && *sentence+1<='z'){
            capitalWord[i] = putchar(*sentence-32);
        }else{
            capitalWord[i] = putchar(*sentence);
        }
    }
    printf("%s",capitalWord);
    }
}
