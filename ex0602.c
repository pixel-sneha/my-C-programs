#include <stdio.h>
//WRITING A PROGRAM TO FIND SECOND LARGEST NUMBER IN AN ARRAY

// findSecondLargest function here
int findSecondLargest(int numbers[100],int size)
{
    int i,largestNum,secondLargest;
    largestNum=numbers[0];
    secondLargest=-2147483648; //random ass number,coincidentally smallest possible num
    for(i=1;i<size;i++)
    {
       if(numbers[i]>largestNum)
        {
            secondLargest=largestNum;
            largestNum=numbers[i]; 
        }
            else if (numbers[i]>secondLargest && numbers[i]!=largestNum)
            {
            secondLargest=numbers[i];
            }
    }

return secondLargest;
}
int main() {
    int size;
    printf("Enter size of array:\n");
    scanf("%d", &size);
    
    int numbers[100];
    
    // Reading array elements
    printf("Enter elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int secondLargest = findSecondLargest(numbers, size);
    printf("Second largest is:%d", secondLargest);
    
    return 0;
}