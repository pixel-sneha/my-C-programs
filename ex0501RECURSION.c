#include <stdio.h>

// power function
int power(int x, int n)
{
    if(n==0)
    {
     return 1;
    }
    if(n<0)
    {
        return -1;
    }
    
    return x*power(x,n-1); //here it calls the function into the function
    
}
// main function
int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    
    printf("%d", power(x, n));
    return 0;
}