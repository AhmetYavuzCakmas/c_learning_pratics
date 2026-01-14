#include <stdio.h>
#include <stdlib.h>


int main()
{
    char* messagePtr="how are you today";
    int i=0;
    while(*(messagePtr+i)!='\0'){
        printf("%c",*(messagePtr+i));
        i++;
    }

    return 0;
}
