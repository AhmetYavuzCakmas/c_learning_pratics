#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{

    int i,dice,howMany[7]={0,0,0,0,0,0,0};
    double oran;
    srand(time(NULL));
    for(i=1;i<=10000;i++){
        dice = rand()%6+1;
        howMany[dice]++;
    }
    printf("zar numarasi\t Kac defa geldi\t\t Oran\n");
    for(i=1;i<7;i++){
        oran = (howMany[i]/10000.0)*100;
        printf("%d\t\t%d\t\t\t\%.1f\n",i,howMany[i],oran);
    }
    return 0;
}
