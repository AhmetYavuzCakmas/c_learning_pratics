#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct info{
    char* name;
    int age;
};

void showMe(struct info);

int main()
{
    struct info x;
    x.name ="Ahmet";
    x.age=21;

    showMe(x);


    return 0;
}


void showMe(struct info x){
    printf("name: %s\n",x.name);
    printf("age: %d\n",x.age);
}
