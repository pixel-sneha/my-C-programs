#include <stdio.h>
#include <stdlib.h>

int main() {
    int size,i;
    scanf("%d", &size);
int sum =0;
// Allocate space for 5 integers using calloc()
int *arr = (int*)calloc(size, sizeof(int));
// This is equivalent to: malloc(5 * sizeof(int))
//calloc() already initializes all allocated memory to zero/Null
if(arr==NULL)
{
    printf("Memory allocation failed!\n");
}
else 
{
    printf("Memory allocated and initialized to zero!\n");
    printf("Initial values:");
    for(i=0;i<size;i++)
    {
      printf(" %d",arr[i]);
    } 
    for(i=0;i<=size-1;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("\nUpdated values:");
    for(i=0;i<size;i++)
    {
      printf(" %d",arr[i]); 
      sum = sum+arr[i]; 
    }
    printf("\nSum: %d\n",sum);
}
free(arr);
printf("Memory freed!\n");
    return 0;
}
