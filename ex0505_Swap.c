#include <stdio.h>

int swapElements(int arr[], int size, int index1, int index2) {
   int i,temp;  
        temp=arr[index1];
        arr[index1]=arr[index2];
        arr[index2]=temp;
   for(i=0;i<size;i++)
   { 
   printf("%d ",arr[i]);
   }
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[10];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index1, index2;
    scanf("%d %d", &index1, &index2);
    
    swapElements(arr, size, index1, index2);
    
    return 0;
}