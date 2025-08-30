#include <stdio.h>


int sumArray(int arr[],int size)
{
    int i,sum=0;
 for(i=0;i<size-1;i++)
 {
   sum=sum+arr[i];
 }
return sum;
}
int main() {
    int n,size;
    scanf("%d", &n);
    
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calling the sumArray function and print the result
    int result= sumArray(arr,n);
     printf("Sum: %d\n",result);
    return 0;
}