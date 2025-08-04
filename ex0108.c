#include<stdio.h>
int main()
{
    //USING NESTED IF 
    int n1,n2,n3;
    printf("Enter values of n1,n2 and n3:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d is the largest num",n1);
        }
        else
        {
            printf("%d is the largest num",n3);
        }

    }
    else if(n2>n3)
    printf("%d is the largest num",n2);
    else
    {
      printf("%d is the largest sum",n3);
    }
    return 0;
}