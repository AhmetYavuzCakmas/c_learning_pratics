#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int findLength(char*);
int main()
{
    char message[100];

    puts("enter a sentence:");
    gets(message);

    printf("length:%d\n",findLength(message));

    return 0;
}

int findLength(char* ptr){
    //strlen(ptr) kodu kýsayolu
    int i= 0;
    while(ptr[i]!='\0'){
        i++;
    }
    return i;

}
