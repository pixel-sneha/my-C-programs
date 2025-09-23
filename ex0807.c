#include <stdio.h>

void tripleValue(int *ptr)
{
    *ptr = *ptr * 3;
    printf("Value tripled to: %d\n",*ptr);
}
    int main() {
    int number = 8;
    printf("Original value: %d\n",number);
    tripleValue(&number);
    printf("Final value: %d\n",number);
    return 0;
}
