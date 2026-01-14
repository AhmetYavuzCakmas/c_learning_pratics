#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i,j,row,column;

    printf("enter a row: \n");
    scanf("%d",&row);
    printf("enter a column: \n");
    scanf("%d",&column);

    int matrix[row][column];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           if(i == j || i+j==row-1){
            matrix[i][j] = 1;
            }else{
            matrix[i][j]=0;
            }
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
