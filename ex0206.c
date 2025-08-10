#include<stdio.h>
int main()
{
    //FACTORIAL USING LOOP
    int n,i,fact=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
}