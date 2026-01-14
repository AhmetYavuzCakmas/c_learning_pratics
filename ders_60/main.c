#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long ull;// takma olarak ull kullanmak daha kolay
typedef struct{
    char* name;
    int age;
    float weight;
}Student;
int main()
{
    ull x,y;
    x=6;
    y=9;
    printf("%d %d\n",x,y);

    Student s1={"Nazli",16,65.2};// struct Student s1 di normalde ama typedef ile artýk yazmýyorýz

    printf("Your name: %s\n",s1.name);
    printf("Your age: %d\n",s1.age);
    printf("Your weight: %.2f\n",s1.weight);



    return 0;
}
