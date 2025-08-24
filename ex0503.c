#include <stdio.h>


int calculateArea(int length, int width)
{
    return length*width;
}
int main() {
    int length,width;
    scanf("%d %d",&length,&width);
    // Call your function and print the result here
    int result = calculateArea(length,width);
    printf("%d",result);
    return 0;
}

