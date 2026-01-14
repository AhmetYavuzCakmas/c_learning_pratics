#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int randomNumber,guessNumber,guessCount,score=100;
    srand(time(NULL));
    randomNumber= (rand()%100)+1;
    printf("1-100 arasinda rastgele bir sayi tuttum bil bakalim\n ");
    printf("Tahmin et!|n");

    while(guessNumber !=-1){
        printf("tahmin ettigin sayiyi gir: ");
        scanf("%d",&guessNumber);
        if(guessNumber==-1)break;
        if(guessNumber<1 || guessNumber>100){
            printf("1 ile 100 arasi demistin gýrzoo...\n");
            continue;
        }
        guessCount++;
        if(guessNumber == randomNumber){
            printf("Tebrikler... %d. seferde bildin..\n",guessCount);
            break;
        }else{
            if(guessNumber>randomNumber){
                printf("daha kucuk sayi gir laaa...");
            }else{
                printf("daha buyuk sayi gir laaa...");
            }
            score-=10;
        }
    }
    printf("\nPuanin 100 uzerinden %d\n",score<0 ? 0:score);


    return 0;
}
