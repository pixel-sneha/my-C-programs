#include <stdio.h>
//bubble sort function
void bubble_sort(int arr[], int n)
{
    int i,j;
  for(i=0;i<n;i++)
  {
    int swapped = 0;
    for(j=0;j<n-i-1;j++)
    //j<n-i-1 will have the same result as j<n-1
    //the n-i-1 is the last index that still needs sorting in the current pass, means no need to compare sorted last elements
    {
      if(arr[j]>arr[j+1]) //compares two interconnected elements and swaps them if previus one is larger
      //changing the > sign to < will get the decreasing sequence
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = 1; 
      }
    }
    if(swapped == 0)
    {
        break;
    }
  }
}
// Printing the sorted array
void printArray(int arr[], int n)
{
    int i;
    printf("Sorted Array:\n");
    for(i=0; i<n;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

//Main function
int main()
{
    int arr[] = {4,5,2,3,8,9,1,7,10,0};
    int n = 10;
    bubble_sort(arr,n);
    printArray(arr,n);
}
