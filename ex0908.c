#include <stdio.h>
#include <stdlib.h>
int main() {
    // Defining Book struct
    struct Book
    {
        int id;
        char title[50];
        int pages;
        float price;
    };
    // Print confirmation message
    printf("Book struct defined successfully!\n");
    //Print the size of the Book struct and its members
    printf("Size of Book struct: %d bytes\n",sizeof(struct Book));
    printf("Size of id: %d bytes\n",sizeof(int));
    printf("Size of title: %d bytes\n",50 * sizeof(char));
    printf("Size of pages: %d bytes\n",sizeof(int));
    printf("Size of price: %d bytes\n",sizeof(float));
    return 0;
}