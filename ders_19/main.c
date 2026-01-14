#include <stdio.h>
#include <stdlib.h>
void Increase();
void Decrease();
int x =7;

int main()
{
    printf("original x: %d\n",x);
    Increase();
    printf("Increase x: %d\n",x);
    Decrease();
    Decrease();
    Decrease();
    printf("Decrease x: %d",x);


    return 0;
}

void Increase(){
    x++;
}

void Decrease(){
    x--;
}
