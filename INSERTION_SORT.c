#include <stdio.h>

void Insertion_sort(int arr[], int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
       while(j>=0 && arr[j]>temp)
       {
        arr[j+1] = arr[j]; //arr j+1 IS arr i but as it changes each time in the loop, here we have to use j+1 as it is dynamic 
        j--;
       }
       arr[j+1] = temp;
    }   
}
void printArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[] = {4,7,8,2,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr,n);

    Insertion_sort(arr,n);
    printf("Sorted array:\n");
    printArray(arr,n);    

}

