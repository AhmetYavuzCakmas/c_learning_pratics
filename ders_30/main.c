#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int numbers[] = {1,45,7,7851,2,4,6,54,54,54651,4515,1,51,51,51,6,121,3254,0,5,4321,5,4554,5,121,
    21,648,494,54};

    printf("%d",sizeof(numbers)/sizeof(numbers[0]));

    return 0;
}
