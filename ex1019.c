#include <stdio.h>

enum TaskStatus{
    PENDING, IN_PROGRESS, COMPLETED,CANCELLED };
int main() {
    // Read input for three task statuses
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    enum TaskStatus task1,task2,task3;
    // Assigning enum values based on input
   task1 = (enum TaskStatus) status1;
   task2 = (enum TaskStatus) status2;
   task3 = (enum TaskStatus) status3;
    // TODO: Print task statuses
    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);
    //  Counting tasks in each category
    int pend_count=0, inpro_count=0,comp_count=0,canc_count=0;
    if (task1 == PENDING) pend_count++;
    if (task2 == PENDING) pend_count++;
    if (task3 == PENDING) pend_count++;

    if (task1 == IN_PROGRESS) inpro_count++;
    if (task2 == IN_PROGRESS) inpro_count++;
    if (task3 == IN_PROGRESS) inpro_count++;

    if (task1 == COMPLETED) comp_count++;
    if (task2 == COMPLETED) comp_count++;
    if (task3 == COMPLETED) comp_count++;

    if (task1 == CANCELLED) canc_count++;
    if (task2 == CANCELLED) canc_count++;
    if (task3 == CANCELLED) canc_count++;
    printf("Pending tasks: %d\n",pend_count);
    printf("In progress tasks: %d\n",inpro_count);
    printf("Completed tasks: %d\n",comp_count);
    printf("Cancelled tasks: %d\n",canc_count);
    // printing active tasks count
 int active_count = pend_count + inpro_count;
 printf("Active tasks: %d",active_count);   
    return 0;
}
