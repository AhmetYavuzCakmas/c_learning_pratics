#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int);

int main()
{
    printf("%d",faktoriyel(5));
    return 0;
}

int faktoriyel(int i){
    int fakt = 1;
    if(i>0){
        return i*faktoriyel(i-1);
    }else{
    return 1;
    }
}
