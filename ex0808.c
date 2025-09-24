#include <stdio.h>

//swapping two variables using pointers
void swap(int *a, int *b)
{ int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Print original values
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    // Print swapped values
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
