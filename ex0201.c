#include<stdio.h>
int main()
{
    //to check if a given char is alphabet,number or special char
    char n;
    printf("Enter any character:\n");
    scanf("%c",&n);
    if(n>='0' && n<='9')
    {
        printf("entered character is a number\n");
    
    }
    else if(n>='A'&& n<='Z')
    {
        printf("entered character is a capital alphabet\n");
    }
    else if(n>='a' && n<='b')
    {
        printf("entered charater is a small alphabet\n");
    }
    else 
    {
        printf("entered character is a special character\n");
    }
    return 0;
}