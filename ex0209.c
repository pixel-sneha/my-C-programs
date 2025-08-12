#include <stdio.h>
int main()
{
    int a[5],i,b[5],c[5];
    printf("Enter 5 values for a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
 printf("enter 5 values for b:\n");
 for(i=0;i<5;i++)
 {
    scanf("%d",&b[i]);
 }
for(i=0;i<5;i++)
{
    c[i]=a[i]+b[i];
}
printf("Addition of 2 arrays:\n");
for(i=0;i<5;i++)
{
    printf("%d",c[i]);
}
return 0;
}