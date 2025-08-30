#include <stdio.h>

// Write your findAverage function here
float findAverage(int numbers[],int size)
{
    int i;
    float sum;
    //int initialValue= numbers[0];
    for(i=0;i<size;i++)
    {
        sum=sum+numbers[i];
    }
    printf("sum =%d\n",sum);
    float average=(sum/(float)size);
    return average;
}
int main() {
    int size;
    scanf("%d", &size);
    
    int numbers[100];
    
    // Reading array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Calling the function
    float average = findAverage(numbers, size);
    printf("Average: %.2f\n", average);
    
    return 0;
}
