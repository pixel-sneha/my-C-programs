#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Contact 
{
    char name[50];
    char phone[20];
    char email[40];
    int age;
};
struct Contact *createContact()
{
    struct Contact *contactPtr;
    contactPtr = malloc(sizeof(struct Contact));
    if(contactPtr==NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Contact created successfully\n");
    }
  contactPtr->name[0] = '\0';
  contactPtr->phone[0] = '\0';
  contactPtr->email[0] = '\0';
  contactPtr->age = 0;
  return contactPtr;
}
int main()
{
    struct Contact* newContact;
    newContact = createContact();
    if(newContact==NULL)
    {
        printf("Failed to create contact\n");
        return 1;
    }
    else
    {
        printf("Contact initialized with default values\n");
    }
    printf("Default Contact Values:\n");
    printf("Name: %s\n",newContact->name);
    printf("Phone: %s\n",newContact->phone);
    printf("Email: %s\n",newContact->email);
    printf("Age: %d\n",newContact->age);
    free(newContact);
    printf("Memory freed successfully\n");
    return 0;
}
