#include<stdio.h>
int main()
{
    //to multiply 2 arrays
    int i,j,a[3][3],b[3][3],k,c[3][3],sum;
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
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("Multiplied array will be\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\t%5d \t",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}