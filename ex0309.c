#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    // Don't change above this line
    
    // Write your code here
    if(score<0 || score>100)
    {
        printf("Invalid score\n");
        return 0;
    }
    switch(score/10)
    {
        case 9: case 10:
        {
            printf("A\n");
            break;
        }
        case 8:
        {
            printf("B\n");
            break;
        }
        case 7:
        {
            printf("C\n");
            break;
        }
        case 6:
        {
            printf("D\n");
            break;
        }
        default:
        {
            printf("F\n");
            break;
        }     
    }

printf("Status: %s\n", (score>=60) ? "Passed\n" : "Failed\n");
return 0;
}