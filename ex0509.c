//ADDING VALUE TO EACH ELEMENT IN AN ARRAY
#include <stdio.h>

void modifyArray(int arr[], int size, int value) {
    for(int i = 0; i < size; i++) {
        arr[i] += value;
    }
}

int main() {
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter elements\n");
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
    
    int k;
    printf("Enter value to be added\n");
    scanf(" %d", &k);
    
    modifyArray(arr, n, k);
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}