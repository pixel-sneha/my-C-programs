#include <stdio.h>

// fahrenheitToCelsius function
float fahrenheitToCelsius(float Fahrenheit)
{ 
  return (Fahrenheit-32)*5/9;
}
int main() {
    // Declare the temperature in Fahrenheit
    float Fahrenheit,Celsius;
    scanf("%f",&Fahrenheit);
    // Converting Fahrenheit to Celsius
    Celsius= fahrenheitToCelsius(Fahrenheit);
    // Printing the result
    printf("%.1f Celsius\n",Celsius);
    return 0;
}