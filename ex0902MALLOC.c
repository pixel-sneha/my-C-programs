#include <stdio.h>
#include <stdlib.h>

int main() {
    int input_value;
    scanf("%d", &input_value);
    //Using Malloc function
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = input_value;
    printf("Stored value: %d\n",*ptr);
    *ptr = (*ptr)*(*ptr);
    printf("Squared value: %d\n",*ptr);
    return 0;
}
