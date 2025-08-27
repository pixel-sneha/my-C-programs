#include <stdio.h>

// Function to print the diagonal elements of a square matrix
int printDiagonal(int matrix[][100], int size) 
{
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    return 0;
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
    
    printDiagonal(matrix, size);
    
    return 0;
}