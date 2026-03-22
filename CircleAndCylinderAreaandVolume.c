#include<stdio.h>

int main() 
{
   float Area;
   float Height;
   float Radius;
   float Volume;
   printf("Enter The Radius Of The Circle And Cylinder:\n");
   scanf("%f",&Radius);
   Area=3.14*Radius*Radius;
   printf("The Area Of The Circle Is %.2f\n", Area);
   printf("Enter The Height Of The Cylinder\n");
   scanf("%f",&Height);
   Volume= 3.14*Radius*Radius*Height;
   printf("The Volume Of The Cylinder is: %.2f\n",Volume );


             return 0; 
}