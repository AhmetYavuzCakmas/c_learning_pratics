#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MYNUMBER 70

int main()
{

    #if MYNUMBER>10
        printf("MYNUMBER is larger than 10");
    #else
        printf("MYNUMBER is smaller than 10");
    #endif // MYNUMBER

    #undef MYNUMBER //tanýmlý deðil artýk
    return 0;
}
