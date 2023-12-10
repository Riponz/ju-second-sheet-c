#include <stdio.h>

#define MAX_SIZE 10

// Function to multiply two matrices
void multiplyMatrices(int n, int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int n, int matrix[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input the size of the matrices
    printf("Enter the size (n) of the matrices: ");
    scanf("%d", &n);

    // Input the elements of the first matrix
    int mat1[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    int mat2[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply the matrices
    int result[MAX_SIZE][MAX_SIZE];
    multiplyMatrices(n, mat1, mat2, result);

    // Display the result
    printf("Result of matrix multiplication:\n");
    displayMatrix(n, result);

    return 0;
}
