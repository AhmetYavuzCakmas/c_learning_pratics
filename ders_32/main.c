#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int i,j,row,column,number;

    printf("enter a row: \n");
    scanf("%d",&row);
    printf("enter a column: \n");
    scanf("%d",&column);
    printf("enter numbers: \n");

    int matrix[row][column];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&number);
            matrix[i][j] = number;
        }
    }
   for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }





    return 0;
}
