#include <stdio.h>

void findMinMax(int arr[],int n, int *min, int *max)
{
    *min= arr[0];
    *max= arr[0];
   for (int i = 1; i < n; i++) 
    {
       if(arr[i]<=*min)
       {
        *min = arr[i];
       }
       if(arr[i]>=*max)
       {
        *max = arr[i];
       }
    } 
}
int main() {
    int n;
    printf("Enter number of elements to be entered:\n");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minValue, maxValue;
    
    findMinMax(arr,n, &minValue,&maxValue);
    printf("Minimum: %d\n", minValue);
    printf("Maximum: %d\n", maxValue);
    
    return 0;
}