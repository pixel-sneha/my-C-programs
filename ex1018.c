#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact* createContact() {
    struct Contact* contact = (struct Contact*)malloc(sizeof(struct Contact));
    if (contact != NULL) {
        strcpy(contact->name, "");
        strcpy(contact->phone, "");
        strcpy(contact->email, "");
        contact->age = 0;
    }
    return contact;
}

void populateContact(struct Contact* contactPtr) {
    printf("Enter name: ");
    fgets(contactPtr->name, sizeof(contactPtr->name), stdin);
    contactPtr->name[strcspn(contactPtr->name, "\n")] = '\0';
    
    printf("Enter phone: ");
    fgets(contactPtr->phone, sizeof(contactPtr->phone), stdin);
    contactPtr->phone[strcspn(contactPtr->phone, "\n")] = '\0';
    
    printf("Enter email: ");
    fgets(contactPtr->email, sizeof(contactPtr->email), stdin);
    contactPtr->email[strcspn(contactPtr->email, "\n")] = '\0';
    
    printf("Enter age: ");
    scanf("%d", &contactPtr->age);
}

void displayContact(const struct Contact *contactPtr) {
    printf("=== CONTACT DETAILS ===\n");
    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d years old\n", contactPtr->age);
    printf("========================\n");
    
    printf("Name length: %lu characters\n", strlen(contactPtr->name));
    
    if (contactPtr->age >= 0 && contactPtr->age <= 12) {
        printf("Generation: Child\n");
    } else if (contactPtr->age >= 13 && contactPtr->age <= 19) {
        printf("Generation: Teenager\n");
    } else if (contactPtr->age >= 20 && contactPtr->age <= 39) {
        printf("Generation: Young Adult\n");
    } else if (contactPtr->age >= 40 && contactPtr->age <= 59) {
        printf("Generation: Middle-aged Adult\n");
    } else if (contactPtr->age >= 60) {
        printf("Generation: Senior\n");
    }
    
    if (strchr(contactPtr->email, '@') != NULL) {
        printf("Email format: Valid\n");
    } else {
        printf("Email format: Invalid\n");
    }
}

int main() {
    struct Contact* contact = createContact();
    
    if (contact != NULL) {
        populateContact(contact);
        displayContact(contact);
        free(contact);
        printf("Program completed successfully\n");
    }
    
    return 0;
}
