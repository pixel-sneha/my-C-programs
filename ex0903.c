#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n;
    scanf("%d", &n);
    double *arr = (double*)malloc(n * sizeof(double));
    int i;
    double sum = 0.0,max=arr[0];
    for(i=0;i<n;i++)
    {
     scanf("%lf",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
         if(arr[i]>=max)
       {
        max = arr[i];
       }
    }
   
    printf("Memory allocated: %d bytes\n",n * sizeof(double));
    double average = sum/(double)n;
    printf("Average: %.2f\n",average);
    printf("Largest: %.2f\n",max);
    free(arr);
    return 0;
}
