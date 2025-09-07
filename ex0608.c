#include <stdio.h>

int main() {
    // Declare variables and pointers
    // Assign addresses to pointers
    // Print values through pointers
    // Modify values through pointers
    // Print modified values from original variables
    int age =25;
    char grade ='A';
    float temperature= 98.6;
    int *age_ptr;  //declared the pointers
    char *grade_ptr;
    float *temp_ptr;
    age_ptr= &age; //dereferencing them 
    grade_ptr= &grade;
    temp_ptr= &temperature;
    printf("Age: %d\n",*age_ptr); //printing values stored at those poointer adresses
    printf("Grade: %c\n",*grade_ptr);
    printf("Temperature: %.1f\n",*temp_ptr);
    *age_ptr=30;
    *grade_ptr='B';
    *temp_ptr= 99.5;
    printf("Age: %d\n",*age_ptr);
    printf("Grade: %c\n",*grade_ptr);
    printf("Temperature: %.1f\n",*temp_ptr);
    return 0;
}