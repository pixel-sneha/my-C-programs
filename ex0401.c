#include <stdio.h>

int main() {
    //verifying input is valid before using
    int number;
    int result = scanf("%d",&number);
    if (result == 1) {
        if (number>=10 && number<=50)
    {
        printf("Valid input!\n");
    }
    else 
    {
        printf("Out of range!\n");
    }

} else {
    // Input was invalid
    printf("Invalid input type!\n");
}
    

    return 0;
}