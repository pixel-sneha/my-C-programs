#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee
{
    int id;
    char department[15];
    int yearsOfService;
    float salary;
};
int main() {
  struct Employee emp1 = {101,"Engineering",5,75000.50};  
  struct Employee emp2 = {102,"Marketing",3,65000.25};
  struct Employee emp3 = {103,"Sales",8,80000.75};
    // Printing information for each employee
    printf("Employee 1:\n");
    printf("ID: %d\n",emp1.id);
    printf("Department: %s\n",emp1.department);
    printf("Years of Service: %d\n",emp1.yearsOfService);
    printf("Salary: %.2f\n",emp1.salary);
  
    printf("Employee 2:\n");
    printf("ID: %d\n",emp2.id);
    printf("Department: %s\n",emp2.department);
    printf("Years of Service: %d\n",emp2.yearsOfService);
    printf("Salary: %.2f\n",emp2.salary);
  
    printf("Employee 3:\n");
    printf("ID: %d\n",emp3.id);
    printf("Department: %s\n",emp3.department);
    printf("Years of Service: %d\n",emp3.yearsOfService);
    printf("Salary: %.2f\n",emp3.salary);
    // Calculating and printing total salary and average years of service
    float total = 0.0;
    total = (emp1.salary + emp2.salary + emp3.salary);
    printf("Total Salary: %.2f\n",total);
    float avg = 0.0,totalYears = 0.0;
    totalYears = (emp1.yearsOfService + emp2.yearsOfService + emp3.yearsOfService);
    avg = (totalYears/3);
    printf("Average Years of Service: %.2f\n",avg);
    return 0;
}
