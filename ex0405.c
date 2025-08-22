#include <stdio.h>

int main() {
    int n,i,j,num=0;
    // Validating input to prevent infinite loops
    int result = scanf("%d",&n);
    // Creating nested loops to print the multiplication table
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            num=i*j;
            printf("%2d ",num);
        } 
        printf("\n");
    }
    if (n<=0) 
    {
        printf("Inalid input!\n");
    }
    return 0;
}