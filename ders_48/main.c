#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int wordCount(char*);
int main()
{
    char message[100];

    puts("enter a sentence:");
    gets(message);

    printf("threre are %d words in the entered sentence\n",wordCount(message));

    return 0;
}

int wordCount(char* ptr){
    int i=0,word=0;
    while(ptr[i]!='\0'){
        if(ptr[i]==' '){
            word++;
        }
        i++;
    }
    return word;
}
