#include<stdio.h>
#include<stdlib.h>
void LinearSearch(int arr[], int n, int key) {
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n", i);
            return;
        }
    }
    if(arr[n-1]!=key){
        printf("Element not found in the array\n");
    }
}
int main(){
    int n,key;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search (key): ");
    scanf("%d", &key);
    LinearSearch(arr, n, key);
    return 0;
}