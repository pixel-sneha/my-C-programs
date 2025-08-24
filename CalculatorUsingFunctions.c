//Write a C program that implements a simple calculator using functions.
#include <stdio.h>
//single functions
int add(int a, int b)
{
  return a+b;
}
int subtract(int a, int b)
{
 return a-b;
}
int multiply(int a,int b)
{
 return a*b;
}
int divide(int a, int b)
{
    if(b==0)
    {
        return -99999;
    }
    return a/b;
}
/*Implement a function calculate(int a, int b, char operation)
 that takes two integers and an operation character (+, -, *, /) as arguments,
  calls the appropriate function, and returns the result.*/
int calculate(int a, int b,char operation)
{ 
    int result;
    if(operation=='+')
    {
        result = add(a,b);
    }
    else if(operation=='-')
    {
        result = subtract(a,b);
    }
    else if(operation=='*')
    {
        result = multiply(a,b);
    }
    else if(operation=='/')
    {
        result = divide(a,b);
    }
    return result;
}


int main() {
   int a,b;
   char operation;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf(" %c",&operation);
   if(operation=='q')
   {
    return 1;
   } 
int result = calculate(a,b,operation);
if(result== -99999)
{
    printf("Invalid input\n");
}
else {
printf("%d\n",result);
}
    return 0;
}

