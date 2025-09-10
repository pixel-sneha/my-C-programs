#include <stdio.h>
//calculateSum function here
int calculateSum(int *arr,int size)
{
    int n,sum=0,i;
    int *ptr = arr;
    for (i=0;i<size;i++)
    {
        sum+=(*ptr);
        ptr++;
    }
    return sum;
}
int main() {
    int n,sum;
    scanf("%d", &n);
    
    int arr[100];
    
    // Reading array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Calling calculateSum function and store the result
    int valueOfSum= calculateSum(arr,n);
    printf("Sum: %d\n",valueOfSum);
    return 0;
}