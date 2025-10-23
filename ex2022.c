#include <stdio.h>
#include <string.h>


typedef struct Book {
int id;
char title[50];
float price;
int quantity;
} Book;
int main() {
    
    Book book1,book2;
 
    int id1, quantity1;
    char title1[50];
    float price1;
    
    scanf("%d", &id1);
    scanf("%s", title1);
    scanf("%f", &price1);
    scanf("%d", &quantity1);
    
    book1.id = id1;
    strcpy(book1.title,title1);
    book1.price = price1;
    book1.quantity = quantity1;

    int id2, quantity2;
    char title2[50];
    float price2;
    
    scanf("%d", &id2);
    scanf("%s", title2);
    scanf("%f", &price2);
    scanf("%d", &quantity2);
    
  
    book2.id = id2;
    strcpy(book2.title,title2);
    book2.price = price2;
    book2.quantity = quantity2;
  
    printf("Book 1: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n",book1.id,book1.title,book1.price,book1.quantity);
    printf("Book 2: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n",book2.id,book2.title,book2.price,book2.quantity);
    float total1 =0.0,total2 = 0.0;
    total1 = (book1.price * book1.quantity);
    total2 = (book2.price * book2.quantity);
    printf("Book 1 Total Value: %.2f\n",total1);
    printf("Book 2 Total Value: %.2f\n",total2);
    float combined_total = 0.0;
    combined_total = (total1 + total2);
    printf("Combined Inventory Value: %.2f\n",combined_total);
    if(total1 > total2){
        printf("Book 1 has higher value\n");
    } 
    else if(total2 > total1){
        printf("Book 2 has higher value\n");
    }
    else if(total1 == total2){
        printf("Both books have equal value\n");
    }

    return 0;
}
