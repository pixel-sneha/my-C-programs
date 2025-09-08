#include <stdio.h>

int main() {
    // Declare and initialize the array 'values' with 6 elements
    int values[6] = {5, 15, 25, 35, 45, 55};
    
    // Use a for loop to print each element using pointer notation *(values + i)
    for (int i = 0; i < 6; i++) {
        printf("Element %d: %d\n", i, *(values + i));
    }
    
    // After the loop, print the third element using both pointer and array notation
    printf("Third element via pointer: %d\n", *(values + 2));
    printf("Third element via array: %d\n", values[2]);
    
    return 0;
}