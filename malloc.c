#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Ask user for the size of the array
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    //arr = (int*)calloc(n, sizeof(int));
    // Allocate memory for n integers
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values to the allocated memory
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print the values
    printf("Array elements using malloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}

