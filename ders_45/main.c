#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char alphabet[70]="QWERTYUIOPÐSDFGHJKLZXCVBNM";
    char str[]=" is english lenguage";
    char str1[70];
    char str3[]=" is english lenguage";
    strcat(alphabet,str); // birleþkeni alphabet deðiþkeninde tutacak
    printf("%s\n",alphabet);

    strcpy(str1,alphabet);//str1 e alphabet deðiþkeni kopyalandý
    printf("%s\n",str1);

    if(strcmp(str,str3)==0){      //stringcompare  (karþýlaþtýrma)
        printf("esitler\n");
    }else{
        printf("esit deðiller");
    }

    return 0;
}
