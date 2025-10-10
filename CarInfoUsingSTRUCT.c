#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Car struct
struct Car
{
    int year;
    char brand[20];
    char model[25];
    float price;
    int mileage;
};
int main() {
    // Declaring a pointer to Car struct named carPtr
  struct Car *carPtr;  
    // malloc() to allocate memory for one Car struct
    carPtr = malloc(sizeof(struct Car));
    // Checking if memory allocation was successful
    if(carPtr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else 
    printf("Memory allocation successful\n");
    
    int year, mileage;
    char brand[20], model[25];
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%s", model);
    scanf("%f", &price);
    scanf("%d", &mileage);
    
    // Assigning input values to struct members using arrow operator
    carPtr->year = year;
    strcpy(carPtr->brand, brand);
    strcpy(carPtr->model, model);
    carPtr->price = price;
    carPtr->mileage = mileage;
    //Calculate age, depreciation, and current value
    int age = (2024 - carPtr->year);
    float depreciation = 0.0;
    if(age>10)
    {
    depreciation = 0.6;
    }
    else
    {
    depreciation = 0.8;
    }

    float current_value = (carPtr->price * depreciation);
    // Printing car information
    printf("Car Information:\n");
    printf("Year: %d\n",carPtr->year);
    printf("Brand: %s\n",carPtr->brand);
    printf("Model: %s\n",carPtr->model);
    printf("Original Price: %.2f\n",carPtr->price);
    printf("Mileage: %d\n",carPtr->mileage);
    printf("Age: %d years\n",age);
    printf("Current Value: %.2f\n",current_value);
    
    free(carPtr);
    printf("Memory freed successfully\n");
    return 0;
}
