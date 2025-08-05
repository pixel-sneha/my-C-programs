#include <stdio.h>

int main() {
    // Declare and initialize variables
    int age = 25;
    float price = 19.99f;
    char grade = 'A';
    #define MAX_SCORE 100
    
    // Calculate discounted price
    float discounted_price = price * 0.85f;
    
    // Convert to integer using casting
    int rounded_price = (int)discounted_price;
    
    // Print all variables
    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);
    
    return 0;
}