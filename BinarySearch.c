#include <stdio.h>
int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (x == array[mid])
      return mid;

    if (x > array[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int n,key;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements in the array: ");
  for(int i=0; i<n;i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d", &key);
  int result = binarySearch(arr, key, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}