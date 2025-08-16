#include <stdio.h>

int main() { //USING MULTIPLE SWITCH STATEMENT AT ONCE
    int month;
    printf("Enter a month respective to their calendar order no:\n");
    scanf("%d", &month);
    char* season = "";
    // Don't change above this line
    
    // Write your code below
    switch(month)
    {
        case 1: case 2: case 12:
        {
            printf("Winter\n");
            break;
        }
        case 3: case 4: case 5:
        {
            printf("Spring\n");
            break;
        }
        case 6: case 7: case 8:
        
        {
            printf("Summer\n");
            break;
        }
        case 9: case 10: case 11:
        {
            printf("Autumn\n");
            break;
        }
        default:
        {
            printf("Invalid month\n");
        }
    }
    
    printf("%s\n", season);
    return 0;
}