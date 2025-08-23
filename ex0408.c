#include <stdio.h>

// convertTemperature function
float convertTemperature(float celsius,char unit)
{
    float convertedTemperature;
    if(unit=='K')
    {
        convertedTemperature=celsius+273.15;
    }
    else if(unit=='F')
    {
        convertedTemperature=(celsius*9.0/5.0)+32;
    }
    else 
    {
        return -1;
    }
    
    return convertedTemperature;
}
int main() {
    // Reading the temperature and unit
    float celsius,convertedTemperature;
    char unit;
    // Calling convertTemperature
    scanf("%f",&celsius);
    scanf(" %c",&unit);
    
    float result=convertTemperature(celsius,unit);
    if(result== -1)
    {
        printf("Invalid unit\n");
    }
    else{
    printf("Converted temperature: %.2f",result);
    }
    return 0;
}