#include <stdio.h>

int main() //verification of input type
{ 
    float weight, height, bmi;
    int weight_result, height_result;
    weight_result = scanf("%f", &weight);
    
    if (weight_result != 1) {
        printf("Invalid input type!\n");
        return 0;
    }
    
    if (weight < 30 || weight > 300) {
        printf("Weight out of range!\n");
        return 0;
    }
    
    height_result = scanf("%f", &height);
    
    if (height_result != 1) {
        printf("Invalid input type!\n");
        return 0;
    }
    
    if (height < 1.0 || height > 2.5) {
        printf("Height out of range!\n");
        return 0;
    }
    
    bmi = weight / (height * height);
    
    printf("BMI: %.1f\n", bmi);
    printf("Category: ");
    
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi < 25.0) {
        printf("Normal weight\n");
    } else if (bmi < 30.0) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    
    return 0;
}