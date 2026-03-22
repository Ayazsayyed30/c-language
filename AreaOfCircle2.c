#include<stdio.h>
int main()
{
    float Area;
    float Radius;
    printf("Enter The Radius Of The Circle:\n");
    scanf("%f",&Radius);
    Area=3.14*Radius*Radius;
    printf("Area Of The Circle Is :%.2f",Area);
    return 0;
}