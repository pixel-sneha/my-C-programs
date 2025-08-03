#include<stdio.h>
int main(){
//write your code here
    int smallNumber=42;
    float  mediumNumber=123.456;
    double largeNumber;
    largeNumber=smallNumber;
    printf("Small to large: %d\n",smallNumber);
largeNumber=mediumNumber;
printf("Medium to large: %.1f",mediumNumber);
    return 0;
}