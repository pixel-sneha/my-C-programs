#include <stdio.h>
#include <string.h>
#include<string.h>
// TODO: Define the Car struct here
struct Car
{
  int year;
  char brand[20];
  int mileage;
  float price;
};
int main() {
    //  Creating a Car variable named myCar
  struct Car myCar;  
    // Read input values
    int year;
    char brand[20];
    int mileage;
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%d", &mileage);
    scanf("%f", &price);
    
    // Assigning the input values to struct members using dot operator
    myCar.year=year;
    strcpy(myCar.brand,brand);
    myCar.mileage=mileage;
    myCar.price=price;
   //Modifying the mileage and price as specified in challenge
    myCar.mileage += 1000;
    myCar.price -= 500.0;
    // Printing the car details using dot operator
    printf("Car Details:\n");
    printf("Year: %d\n",myCar.year);
    printf("Brand: %s\n",myCar.brand);
    printf("Mileage: %d\n",myCar.mileage);
    printf("Price: %.2f\n",myCar.price);
    return 0;
}
