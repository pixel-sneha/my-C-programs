#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n,i,sum = 0;
    int aboveAvg = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n *sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else 
    {
        printf("Array of size %d created successfully!\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int min = arr[0];
        for(i=0;i<n;i++)
        {
            sum = sum+ arr[i];
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
        int avg = sum/n;
        for(i=0;i<n;i++)
        {
            if(arr[i]>avg)
            {
                aboveAvg++;
            }
        }
        printf("Sum: %d\n",sum);
        printf("Minimum: %d\n",min);
        printf("Elements above average: %d\n",aboveAvg);
        printf("Memory used: %ld bytes\n",n*sizeof(int));
        free(arr);
        printf("Memory successfully freed!\n");
    }
    return 0;
}
