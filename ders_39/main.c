#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char myLetters[7]={'a','b','c','d','e','f','g'};

    printf("ilk elemanin adresi: %x\n",&myLetters[0]);
    printf("ilk elemanin adresi: %x\n\n",myLetters);

    printf("ikinci elemanin adresi: %x\n",&myLetters[1]);
    printf("ikinci elemanin adresi: %x\n\n",myLetters+1);

    printf("ucuncu elemanin adresi: %x\n",&myLetters[2]);
    printf("ucuncu elemanin adresi: %x\n\n",myLetters+2);

    printf("ilk elemanin degeri: %c\n",myLetters[0]);
    printf("ilk elemanin degeri: %c\n\n",*(myLetters));

    printf("ikinci elemanin degeri: %c\n",myLetters[1]);
    printf("ikinci elemanin degeri: %c\n\n",*(myLetters+1));

    printf("ucuncu elemanin degeri: %c\n",myLetters[2]);
    printf("ucuncu elemanin degeri: %c\n\n",*(myLetters+2));
    return 0;
}
