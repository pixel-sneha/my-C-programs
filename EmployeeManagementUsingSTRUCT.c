#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearOfService;
};
// Implementing fillEmployeeData function here
void fillEmployeeData(struct Employee *empPtr)
{
    int id;
    scanf("%d",&empPtr->id);
    char name[50];
    scanf("%s",name);
    char department[30];
    scanf("%s",department);
    float salary;
    scanf("%f",&empPtr->salary);
    int yearOfService;
    scanf("%d",&empPtr->yearOfService);
    strcpy(empPtr->name,name);
    strcpy(empPtr->department,department);
    float bonus = 0.0;
    if(empPtr->yearOfService>=5)
    {
       bonus = (0.1*empPtr->salary);
    }
    else
    {
        bonus = 0.05*empPtr->salary;
    }
     empPtr->salary += bonus;
}
//Implementing displayEmployee function here
void displayEmployee(struct Employee *empPtr)
{
    printf("Employee Details:\n");
    printf("ID: %d\n",empPtr->id);
    printf("Name: %s\n",empPtr->name);
    printf("Department: %s\n",empPtr->department);
    printf("Salary: %.2f\n",empPtr->salary);
    printf("Years of Service: %d\n",empPtr->yearOfService);
}
// Implementing promoteEmployee function here
void promoteEmployee(struct Employee *empPtr)
{
    int yearOfService;
    empPtr->salary += 0.15*empPtr->salary;
    empPtr->yearOfService += 1;
    printf("Employee promoted successfully!\n");
}
int main() {
    struct Employee *empPtr;
    empPtr = malloc(sizeof(struct Employee));
    if(empPtr==NULL)
    {
        printf("Memory allocation failed\n");
    }
    else {
        printf("Memory allocated successfully\n");
    }
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
 
    free(empPtr);
    printf("Memory freed successfully\n");
    return 0;
}
