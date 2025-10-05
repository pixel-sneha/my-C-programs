#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[25];
    float price;
    int quantity;
};

int main() {
    struct Product item = {501, "Laptop", 899.99, 15};
    
    struct Product *itemPtr;
    
    // Assigning the address of 'item' to 'itemPtr'
    itemPtr = &item;
    
    // Printing original product info using dot operator
    printf("Original Product Info:\n");
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    
    // Printing product info via pointer using (*itemPtr).member
    printf("Product Info via Pointer:\n");
    printf("ID: %d\n", (*itemPtr).id);
    printf("Name: %s\n", (*itemPtr).name);
    printf("Price: %.2f\n", (*itemPtr).price);
    printf("Quantity: %d\n", (*itemPtr).quantity);
    
    // Printing and verifying addresses
    printf("Address of item: %p\n", &item);
    printf("Value of itemPtr: %p\n", itemPtr);
    if (&item == itemPtr) {
        printf("Address verification: Match\n");
    } else {
        printf("Address verification: No Match\n");
    }
    
    return 0;
}
