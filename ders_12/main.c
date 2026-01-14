#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++){
            for(int j = 1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }

    return 0;
}
