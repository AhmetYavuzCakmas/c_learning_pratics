#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct myDate{
    int day;
    int month;
    int year;
};

int main()
{
    struct myDate old;
    struct myDate now;
    printf("enter your date of birth:\n");
    scanf("%d%d%d",&old.day,&old.month,&old.year);

    printf("enter today's date:\n");
    scanf("%d%d%d",&now.day,&now.month,&now.year);
    if(old.day>now.day){
        now.day+=30;
        now.month--;
    }
    if(old.month>now.month){
        now.month+=12;
        now.year--;
    }
    printf("\nYou have lived ");
    printf("%d day, %d month, %d year",now.day-old.day,now.month-old.month,now.year-old.year);
    printf(" till now\n\n");





    return 0;
}
