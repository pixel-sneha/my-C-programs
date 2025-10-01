#include <stdio.h>
#include<stdlib.h>
int main() {
    // Defining struct Rectangle
    struct Rectangle 
    { 
        int width;
        int length;
    };
    //Defining struct Student
    struct Student
    {
        int id;
        char name[30];
        float gpa;
    };
    //creating the struct variables 
    struct Rectangle rect1,rect2;
    struct Student student1,student2,student3;
    // Printing confirmation messages for each variable created
    printf("Rectangle variable rect1 created\n");
    printf("Rectangle variable rect2 created\n");
    printf("Student variable student1 created\n");
    printf("Student variable student2 created\n");
    printf("Student variable student3 created\n");
   
    // Printing memory usage for each struct type using sizeof()
    printf("Memory per Rectangle: %d bytes\n",(int*)sizeof(struct Rectangle));
    printf("Memory per Student: %d bytes\n",(int*)sizeof(struct Student));
    return 0;
}
