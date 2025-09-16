#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of trials:\n");
    scanf("%d", &n);
    
    char username[100];
    char password[100];
    int successful_logins = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%s", username);
        scanf("%s", password);
        
        int username_correct = strcmp(username, "admin") == 0;
        int password_correct = strcmp(password, "secret123") == 0;
        
        if (username_correct && password_correct) {
            printf("Login successful\n");
            successful_logins++;
        } else if (username_correct && !password_correct) {
            printf("Invalid password\n");
        } else if (!username_correct && password_correct) {
            printf("Invalid username\n");
        } else {
            printf("Invalid credentials\n");
        }
    }
    
    printf("Total successful logins: %d\n", successful_logins);
    
    return 0;
}