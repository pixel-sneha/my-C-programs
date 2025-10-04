#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    int id;
    float grade;
};
int main() {
    struct Student student1;
    int id;
    float grade;
  printf("Enter student id:\n");
    scanf("%d", &id);
  printf("Enter grade: \n");
    scanf("%f", &grade);
    
    student1.id = id;
    student1.grade = grade;
  
    char* status;
    
    if(student1.grade>100.0)
    {
        student1.grade = 100.0;
    }
    if(student1.grade<=0)
    {
        student1.grade = 0.0;
    }
    float bonus = 5.0;
    float bonusGrade = student1.grade + bonus;
    if(bonusGrade>100.0)
    {
        bonusGrade = 100.0;
    }
    // Determining grade status
    if(student1.grade>=90.0)
    {
        status = "Excellent";
    }
    else if(student1.grade>=80.0 && student1.grade<90)
    {
        status = "Good";
    }
    else if(student1.grade>=70.0 && student1.grade<80)
    {
        status = "Average";
    }
    else if(student1.grade<70.0)
    {
        status = "Needs Improvement";
    }
    // the results
    printf("Student Information:\n");
    printf("ID: %d\n",student1.id);
    printf("Original Grade: %.1f\n", student1.grade);
    printf("Bonus Grade: %.1f\n",bonusGrade);
    printf("Grade Status: %s\n",status);
    
    return 0;
}
