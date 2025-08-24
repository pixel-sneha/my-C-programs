/* Create a function named sumToN that uses recursion to calculate the sum of numbers from 1 to n. */
#include <stdio.h>

//sumToN function here
int sumToN(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n+sumToN(n-1);
}
//main function
int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", sumToN(n));
    return 0;
}