#include<stdio.h>
int main()
{
    //summ of first N odd numbers i.e. 1+3+5+...+N
    int n,i,sum=0;
    printf("Enter value of last number:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
        printf("sum=%d",sum);
    }
    printf("Sum of first %d numbers is %d",n,sum);
    return 0;

}