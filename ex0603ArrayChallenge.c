//initializing,rotating and finding element of a 2D array
#include <stdio.h>

void initializeMatrix(int matrix[][10], int size);
void rotateMatrix(int original[][10], int rotated[][10], int size);
int findElement(int matrix[][10], int size, int target);

int main() {
    int size;
    scanf("%d", &size);
    int matrix[10][10];
    int rotated[10][10];
    
    initializeMatrix(matrix, size);
    
    printf("Original Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    rotateMatrix(matrix, rotated, size);
    
    printf("Rotated Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int result = findElement(matrix, size, 10);
    if (result) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }
    
    return 0;
}

void initializeMatrix(int matrix[][10], int size) {
    int value = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value+1;
            value++;
        }
    }
}

void rotateMatrix(int original[][10], int rotated[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rotated[j][size-1-i] = original[i][j];
        }
    }
}

int findElement(int matrix[][10], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}