#include<stdio.h>
int main()
{
    int i,j,n;
    char abc='A';
    printf("enter number of rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",abc);
           
        }
         abc++;
        printf("\n");
    }
    return 0;
}