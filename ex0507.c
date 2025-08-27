#include <stdio.h>

// Function to calculate the sum of boundary elements
int sumBoundary(int matrix[][100], int size) {
    int sum=0,i,j;
    if(size==1)
    {
        printf("%d",matrix[0][0]);
    }
   
        for (int j = 0; j < size; j++) 
        {
        sum=sum+matrix[0][j];
        sum=sum+matrix[size-1][j];
        
        }
       
        for (int i = 1; i <size-1; i++) 
        { 
          sum=sum+matrix[i][0];
          sum=sum+matrix[i][size-1];
        }
    return sum;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int matrix[100][100];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int result = sumBoundary(matrix, size);
    printf("%d\n", result);
    
    return 0;
}
