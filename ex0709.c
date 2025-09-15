#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Read the number of people
    int n,i=1;
    char firstName[50],lastName[50];
    printf("Enter the number of people:\n");
    scanf("%d", &n);
    char fullName[100];
    char greeting[150];
    for(i=1;i<=n;i++)
    {
        scanf("%s",firstName);
        scanf("%s",lastName);
        strcpy(fullName,firstName); //copying FIRSTNAME into FULLNAME
        strcat(fullName," "); //adding SPACE at the end of FULL NAME
        strcat(fullName,lastName);
        strcpy(greeting,"Hello, ");
        strcat(greeting,fullName);
        strcat(greeting,"! Welcome to our program.");
        printf("%s\n",greeting);
    }
    char summary[100];
    strcpy(summary,"Total people processed:");
    char nStr[10];
    sprintf(nStr," %d",n);
    strcat(summary,nStr);
    printf("%s\n",summary);
    return 0;
}