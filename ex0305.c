#include<stdio.h>
int main()
{
    int a,b,temp;
    //Swapping variables using 3 variables
    printf("enter value for a and b:\n");
    scanf("%d %d",&a,&b);
    temp=a; //value of a will be assigned to temp
    a=b;//value of b will be assigned to a
    b=temp; //value of temp will be assigned to b
    printf("%d %d",a,b);
     
    //swapping using 2 variables
    printf("enter value for a and b:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values of a and b after swapping= %d %d",a,b);
    return 0;
}