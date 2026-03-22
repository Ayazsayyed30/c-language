#include <stdio.h>
#include <string.h>
struct Result { char name[20]; int value; };
int multiply(int a,int b){ return a*b; }
int subtract(int a,int b){ return a-b; }
int sumDigits(int n){ return (n==0)?0:(n%10)+sumDigits(n/10); }
void swap(int *x,int *y){ int t=*x;*x=*y;*y=t; }
int main(){
    int a,b,c;
    struct Result r[2];
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    strcpy(r[0].name,"Multiply");
    r[0].value=multiply(a,b);
    strcpy(r[1].name,"Subtract");
    r[1].value=subtract(a,b);
    printf("\n%s=%d\n%s=%d\n",r[0].name,r[0].value,r[1].name,r[1].value);
    printf("Sum of digits=%d\n",sumDigits(a));
    int *max=&a,*min=&a;
    if(b>*max)max=&b;
    if(c>*max)max=&c;
    if(b<*min)min=&b;
    if(c<*min)min=&c;
    swap(max,min);
    printf("After swap: %d %d %d\n",a,b,c);
    return 0;
}