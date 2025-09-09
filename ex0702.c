#include <stdio.h>

int main() {
    //TODO:
    // Declare pointer 'ptr' and initialize it to point to the first element
    // Use a for loop with pointer arithmetic to traverse the array
    // Print each value and address, then increment the pointer
    // Reset the pointer and use pointer arithmetic to access specific elements
    int data[5]={12,24,36,48,60};
    int *ptr= data;
    int i=0;
   for (int i = 0; i < 5; i++) 
   {
    printf("Value: %d, Address: %p\n", *ptr, ptr);
    ptr++;
    }
ptr= &data[0];
printf("Third element: %d\n",*(ptr+2));
printf("Last element: %d\n",*(ptr+4));
    return 0;
}