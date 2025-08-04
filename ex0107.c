#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter value of test a:\n");
    scanf("%d",&a);
    printf("Enter value of test b:\n");
    scanf("%d",&b);
    sum=a+b;
    if(sum>=50) //USING IF ELSE STATEMENT
    {
        printf("you have passed \n");
    }
    else
    { printf("you have failed.\n");
    }
    return 0;
}