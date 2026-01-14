#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,area;
    float PI = 3.14;
    printf("enter a radius of circle: ");
    scanf("%f",&radius);
    area = PI * radius*radius;
    printf("Area of cicrcle is : %f",area);




    return 0;
}
