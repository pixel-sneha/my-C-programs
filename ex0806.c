#include <stdio.h>

//passing pointers to function
void displayValue(int *ptr)
{
    printf("Value at address: %d\n",*ptr); //passing pointers does NOT cretae a copy of the value but works DIRECTLY ON the original one 
    //hence it returns modified value
}
int main() {
    
    int number = 42;
    printf("Original value: %d\n",number);
    displayValue(&number);
    printf("Function call completed\n");
    return 0;
}
