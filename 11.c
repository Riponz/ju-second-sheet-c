#include <stdio.h>

#define MAX_SIZE 10

// Function to calculate the transpose of a matrix
void transposeMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns of the matrix
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    // Input the matrix elements
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the transpose of the matrix
    int result[MAX_SIZE][MAX_SIZE];
    transposeMatrix(rows, cols, matrix, result);

    printf("Original Matrix:\n");
    displayMatrix(rows, cols, matrix);

    printf("\nTranspose of the Matrix:\n");
    displayMatrix(cols, rows, result);

    return 0;
}
