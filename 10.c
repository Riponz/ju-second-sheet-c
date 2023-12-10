#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10

// Function to calculate the norm of a matrix
double matrixNorm(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    double sumOfSquares = 0.0;

    // Calculate the sum of squares of all elements in the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sumOfSquares += pow(matrix[i][j], 2);
        }
    }

    // Calculate the square root of the sum of squares
    double norm = sqrt(sumOfSquares);

    return norm;
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

    // Calculate and print the norm of the matrix
    double norm = matrixNorm(rows, cols, matrix);
    printf("Norm of the matrix: %lf\n", norm);

    return 0;
}
