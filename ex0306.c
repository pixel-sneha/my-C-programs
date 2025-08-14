#include<stdio.h>
int main()
{
    //making a calculator using switch statement
    int n,a,b,sum,sub,multi,div;
    printf("SELECT OPERATION METHOD \n");
    printf("1 addition\n 2 subtraction\n 3 multiplication\n 4 division\n");
    printf("\n enter your choice of number:");
    scanf("%d",&n);
    printf("\n enter 2 values of a and b\n");
    scanf("%d %d",&a,&b);
    switch(n)
    {
        case 1:
        sum=a+b;
        printf("a + b will be %d",sum);
        break;
       
        case 2:
        sub=a-b;
        printf("a - b will be %d",sub);
        break;
       
        case 3:
        multi= a*b;
        printf("a * b = %d",multi);
        break;
       
        case 4:
        div=a/b;
        printf("a / b will be %d",div);
        break;

        default:
        printf("\n enter valid number.\n");
        break;
    }
 return 0;
}