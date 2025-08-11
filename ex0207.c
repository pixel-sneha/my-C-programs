#include<stdio.h>
int main()
{
    //FIBONACCI SERIES
    int n,a=1,b=1,c;
    printf("enter last number:");
    scanf("%d",&n);
    printf("\n Fibonacci Series:\t %d \t %d",a,b);
    do
    {
       c = a+b;
       printf("\t %d",c);
       a=b;
       b=c;
   } while(c <= n);
       
 return 0;

}