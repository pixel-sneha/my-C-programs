#include <stdio.h>

int main() {
    
    //using nested loop
    int n,i,num,j,prod;
    scanf("%d",&n);
    for(i=1;i<=n ;i++)
    {
        for(j=1;j<=n;j++)
        {
            prod=i*j;
            printf("%d ",prod);
        }
        printf("\n");
    
    }
    return 0;
}
