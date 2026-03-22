#include<stdio.h>

int main()
 {
   int a;
   int b;
   int temp;
   printf("Enter First Number");
   scanf("%d",&a);
   printf("Enter Second Number:");
   scanf("%d", &b);
   temp=a;
   a=b;
   b=temp;
   printf("After Swapping: First Number=%d Second Number=%d", a,b); 
             return 0; 
}