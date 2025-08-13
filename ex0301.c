#include<stdio.h>
int main()
{
    //To add 2 matrices
    int i,j,a[3][3],b[3][3],k,c[3][3];
    printf("Enter matrix A values\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);

        }
    }
      printf("Enter matrix B values\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //to print these arrays
    printf("Array after addition will be:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",c[i][j]);
        }
    }
    return 0;
}