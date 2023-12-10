#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Function to sort a 1-D array in ascending order using bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort a 2-D array in ascending order
void sort2DArray(int rows, int cols, int arr[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        bubbleSort(arr[i], cols);
    }
}

// Function to print a 2-D array
void print2DArray(int rows, int cols, int arr[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the sum of two sorted arrays and store the result in a third array
void sortedSum(int rows, int cols, int arr1[MAX_SIZE][MAX_SIZE], int arr2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
        // Sort the row in ascending order
        bubbleSort(result[i], cols);
    }
}

int main() {
    int rows, cols;

    // Input the size of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the elements of the first matrix
    int arr1[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input the elements of the second matrix
    int arr2[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Sort the individual arrays
    sort2DArray(rows, cols, arr1);
    sort2DArray(rows, cols, arr2);

    // Display the sorted matrices
    printf("Sorted First Matrix:\n");
    print2DArray(rows, cols, arr1);

    printf("\nSorted Second Matrix:\n");
    print2DArray(rows, cols, arr2);

    // Calculate and print the sorted sum of the matrices
    int result[MAX_SIZE][MAX_SIZE];
    sortedSum(rows, cols, arr1, arr2, result);

    printf("\nSorted Sum Matrix:\n");
    print2DArray(rows, cols, result);

    return 0;
}
