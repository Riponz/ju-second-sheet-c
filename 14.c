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

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int matrix1[MAX_SIZE][MAX_SIZE], int rows2, int cols2, int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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

    // Input the elements of the matrix
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(rows, cols, matrix);

    // Calculate and display the transpose of the matrix
    int transpose[MAX_SIZE][MAX_SIZE];
    transposeMatrix(rows, cols, matrix, transpose);
    printf("\nTranspose of the Matrix:\n");
    displayMatrix(cols, rows, transpose);

    // Calculate and display the multiplied value of the matrix with its transpose
    int result[MAX_SIZE][MAX_SIZE];
    multiplyMatrices(rows, cols, matrix, cols, rows, transpose, result);
    printf("\nMultiplication of Matrix with its Transpose:\n");
    displayMatrix(rows, rows, result);

    return 0;
}
