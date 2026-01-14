#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*
    double average=0;
    int sum=0;
    int num[3]={12,45,78};
    for(int i = 0;i<3;i++){
            sum+= num[i];
    }
    average = sum/3;
    printf("girdiginiz sayilarin ortalamasi %d dir.",average);
    */

    double average = 0,numbers[3],sum;

    printf("enter three numbers: ");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);
    for(int i = 0;i<3;i++){
        sum += numbers[i];
        ;
    }
    average = sum/3;

    printf("Girdiigniz sayilarin ortalamasi %.2lf dir",average);


    return 0;
}
