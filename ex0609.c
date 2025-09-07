#include <stdio.h>

int main() {
    int numbers[4]  = {10,20,30,40};
    int *ptr;
    ptr = numbers; 
    printf("Array name address: %p\n",numbers); //address of the array numbers
    printf("First element address: %p\n",ptr); //address of the first element numbers[0] 
    
    //numbers and &numbers[0] mean the same thing
    
    printf("Pointer address: %p\n",ptr); //address of the pointer ptr
    printf("Value via array name: %d\n",*numbers); //prints value first array element
    //array is a kind of constant pointer for the first array elemnt 
    
    printf("Value via pointer: %d\n",*ptr); //prints value of numbers[0]
    return 0;
}