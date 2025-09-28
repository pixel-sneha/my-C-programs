#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of integers
    int n;
    scanf("%d", &n);
    int *ptr = (int*)malloc(n* sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else 
    {
        printf("Memory allocation successful!\n");
    }
    int i,arr[20];
    int sum=arr[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum: %d\n",sum);
    printf("Bytes allocated: %d\n",n* sizeof(int));
    return 0;
}
