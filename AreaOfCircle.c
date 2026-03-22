#include<stdio.h>

int main() 
{
    float radius;
    float Area;
    printf("Enter The Radius Of The Circle\n");
    scanf("%f",&radius);
    Area= 3.14*radius*radius;
    printf("The Area Of The Circle Is %.2f\n", Area);


             return 0; 
}