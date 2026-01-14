#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum Level{
    SMALL=1,
    MEDIUM,
    LARGE
};
int main()
{

    enum Level myConst;
    myConst=LARGE;

    switch(myConst){
        case 1:printf("Small Level\n");break;
        case 2:printf("Medium Level\n");break;
        case 3:printf("Large Level\n");break;
    }


    return 0;
}
