#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son_iki,ilk_iki,sum;
    for(int i = 1000;i<=9999;i++){
        son_iki= i%100;
        ilk_iki=i/100;
        sum = (son_iki+ilk_iki)*(son_iki+ilk_iki);

        if(i==sum){
            printf("%d\n",i);
        }
    }
    return 0;
}
