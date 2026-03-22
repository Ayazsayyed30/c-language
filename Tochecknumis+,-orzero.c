#include<stdio.h>
int main()
{
    int number;
    printf("Enter An Integer:\n");
    scanf("%d",&number);
    if(number > 0)
    {
        printf("The Number Is Positive");
    }
    else if (number < 0)
    {
        printf("The Number Is Negative");
    }
    else
    {
        printf("The Number Is Zero");
        return 0;
    }
    
    }

    
