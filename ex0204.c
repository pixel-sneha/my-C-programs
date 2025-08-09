#include<stdio.h>
int main()
{
    //Leap year calculating
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("entered year %d is a leap year.",year);
    }
    else 
    {
        printf("entered year %d is not a leap year.",year);
    }
    return 0;
}