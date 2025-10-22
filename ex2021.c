#include <stdio.h>

typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main() {
    // Declaring variables using the typedef aliases
    SensorID sensor;
    Temperature currentTemp;
    Temperature threshold;
    Status alertStatus;
    
    
    scanf("%d", &sensor);
    scanf("%f", &currentTemp);
    scanf("%f", &threshold);
    scanf("%d", &alertStatus);
    
    // Printing sensor information
    printf("Sensor ID: %d\n", sensor);
    printf("Current Temperature: %.1f\n", currentTemp);
    printf("Threshold: %.1f\n", threshold);
    printf("Alert Status: %d\n", alertStatus);
    
    // Calculating temperature difference
    Temperature difference = currentTemp - threshold;
    printf("Temperature Difference: %.1f\n", difference);
    
    // Determining temperature category
    if (currentTemp < 0.0) {
        printf("Category: Freezing\n");
    } else if (currentTemp >= 0.0 && currentTemp <= 25.0) {
        printf("Category: Normal\n");
    } else {
        printf("Category: Hot\n");
    }
    
    // Checking alert condition
    if (currentTemp > threshold && alertStatus == 1) {
        printf("Alert: Temperature exceeded threshold!\n");
    } else {
        printf("Alert: No alert triggered\n");
    }
    
    return 0;
}
