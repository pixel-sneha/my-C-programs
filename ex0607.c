#include <stdio.h>

int main() {
    // pointer basics
    // 1. Declare and initialize the variables
    // 2. Declare the pointers
    // 3. Use the address-of operator to assign addresses
    // 4. Print the addresses using the format shown
    int number=42;
    char letter='X';
    int *num_ptr;
    char *char_ptr;
    num_ptr= &number;
    char_ptr= &letter;
    printf("Address of number: %p\n",num_ptr);
    printf("Address of letter: %p\n",char_ptr); //the %p is used to print adress value of the pointer

    // 1. Declare and initialize the variables
    // 2. Declare the pointers
    // 3. Assign addresses to pointers
    // 4. Print the dereferenced values
    int value=75;
    float price=19.99;
    int *value_ptr = &value;
    float *price_ptr = &price;
    printf("Value through pointer: %d\n",*value_ptr);
    printf("Price through pointer: %.2f\n",*price_ptr); //here we used %d and %f to print actual values assigned w pointers
    
    return 0;
}