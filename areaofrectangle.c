#include<stdio.h>
int main()  
{
    float length;
    float breadth;
    float area;
    printf("Enter The Length Of The Rectangle\n");
    scanf("%f",&length);
    printf("Enter The Breadth Of The Rectangle\n");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("The Area Of The Rectangle Is %.2f" , area);
             return 0; 
}