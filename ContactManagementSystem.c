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
    //printf("=== CONTACT DETAILS ===\n");
    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d\n", contactPtr->age);
}
void updateContact(struct Contact *contactPtr)
{
    int n;
    printf("What would you like to update?\n1. Name\n2. Phone\n3. Email\n4. Age\nEnter choice (1-4): ");
    scanf("%d",&n);
    getchar();
    switch(n)
    {
        case 1: 
        printf("Enter new name: ");
        fgets(contactPtr->name, sizeof(contactPtr->name), stdin);
        contactPtr->name[strcspn(contactPtr->name, "\n")] = '\0';
        printf("Contact updated successfully\n");
        break;
        case 2: 
        printf("Enter new phone: ");
        fgets(contactPtr->phone, sizeof(contactPtr->phone), stdin);
        contactPtr->phone[strcspn(contactPtr->phone, "\n")] = '\0';
        printf("Contact updated successfully\n");
        break;
        case 3: 
        printf("Enter new email: ");
        fgets(contactPtr->email, sizeof(contactPtr->email), stdin);
        contactPtr->email[strcspn(contactPtr->email, "\n")] = '\0';
        printf("Contact updated successfully\n");
        break;

        case 4: 
        printf("Enter new age: ");
        scanf("%d",&contactPtr->age);
        printf("Contact updated successfully\n");
        break;

        default:
        printf("Invalid choice\n");
        break;
    }
}
int main() {
    struct Contact* contact = createContact();
    
    if (contact != NULL) {
        populateContact(contact);
        printf("--- Initial Contact ---\n");
        displayContact(contact);
        printf("--- Updating Contact ---\n");
        updateContact(contact);
        printf("--- Updated Contact ---\n");
        displayContact(contact);
        free(contact);
        printf("Contact management completed\n");
    }
    
    return 0;
}
