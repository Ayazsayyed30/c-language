#include<stdio.h>

int main() 
{
   float c;
   float f;
   printf("Enter The Temperature In Celsius:\n");
   scanf("%f",&c);
   f=(9.0/5.0)*c+32;
   printf("The Temperature in Fahrenheit Is: %.2f\n",f);


             return 0; 
}