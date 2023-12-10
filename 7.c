#include <stdio.h>

void insertElement(int arr[], int *size, int element) {
    int i = *size - 1;


    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }


    arr[i + 1] = element;
    (*size)++;
}

int main() {
    int arr[100], size, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to be inserted: ");
    scanf("%d", &element);


    insertElement(arr, &size, element);


    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
