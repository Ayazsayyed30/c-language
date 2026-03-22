#include<stdio.h>

int main() 
{
    float principal,rate,interest,time;
    printf("enter the principle amount\n");
    scanf("%f",&principal);
    printf("enter the rate of interest\n");
    scanf("%f",&rate);
    printf("enter the time in years\n");
    scanf("%f",&time);
    interest=(principal*rate*time)/100;
    printf("the simple interest is %.2f\n",interest);
             return 0; 
}