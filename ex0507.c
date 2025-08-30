/* Create a program that declares a 3x3 matrix (2D array) of integers,Initializes it with values 1 through 9 (row by row),
creates a function called processMatrix that:
Calculates the sum of all elements in the matrix
Calculates the sum of diagonal elements (both main and anti-diagonal) */
#include <stdio.h>

void processMatrix(int matrix[][3], int size) {
    int total_sum = 0;
    int main_diagonal_sum = 0;
    int anti_diagonal_sum = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            total_sum += matrix[i][j];
            
            if (i == j) {
                main_diagonal_sum += matrix[i][j];
            }
            
            if (i + j == size - 1) {
                anti_diagonal_sum += matrix[i][j];
            }
        }
    }
    
    printf("Sum of all elements: %d\n", total_sum);
    printf("Sum of main diagonal: %d\n", main_diagonal_sum);
    printf("Sum of anti-diagonal: %d\n", anti_diagonal_sum);
}

int main() {
    int i,j,matrix[3][3];
    printf("ENTER ARRAY ELEMENTS: \n");
       for(i=0;i<3;i++)
       {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
       }  
    
    
    processMatrix(matrix, 3); 
    
    return 0;
}
