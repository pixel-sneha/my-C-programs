//Grade management system
#include <stdio.h>

// Function prototypes
float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);

int main() {
    int size,i,highest,grade;
    float average;
    printf("Enter number of Students:\n");
    scanf("%d",&size);
    int grades[100];
    printf("Enter grades:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&grades[i]);
    }
    // TODO: Calculate and display the average grade
    average= calculateAverage(grades,size);
    printf("Average grade: %.2f\n",average);
    // TODO: Find and display the highest grade
    highest= findHighestGrade(grades,size);
    printf("Highest grade: %d\n",highest);
    // TODO: Display letter grade for each numerical grade
    printf("\nStudent Grades:\n");
    
    for(i=0;i<size;i++)
    {
    char letter= determineLetterGrade(grades[i]);
     printf("Student %d: %d - %c\n",i+1,grades[i],letter);
    }
    return 0;
}

float calculateAverage(int grades[], int size) {
    int i;
    float sum=0;
    for(i=0;i<size;i++)
    {
        sum+=grades[i];
    }
 float average= sum/(float)size;
return average;
}

int findHighestGrade(int grades[], int size) {
    int i;
    int highest=grades[0];
    for(i=1;i<size;i++)
    {
        if(grades[i]>highest)
        {
            highest=grades[i];
        }
    }
    return highest;
}

char determineLetterGrade(int grade) {
    if (grade >= 90) return 'A';
    else if (grade >= 80) return 'B';
    else if (grade >= 70) return 'C';
    else if (grade >= 60) return 'D';
    else return 'F';
}