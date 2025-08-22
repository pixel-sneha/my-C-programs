#include <stdio.h>

//calculateArea function
float calculateArea(int length,int width)
{
return length*width;
}
int main() {
    //global declaration
    int length,width;
    scanf("%d %d",&length,&width);
    int area=calculateArea(length,width);
    // Calling calculateArea
    printf("Area: %d",area);
    return 0;
}