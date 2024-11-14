#include <stdio.h>

int main() {
    int size, target;

    // Get user input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array based on the size
    int arr[size];

    // Get user input for the array elements
    printf("Enter %d elements for the array: \n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get user input for the element to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform linear search
    int found = -1; // Variable to store index of the found element
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i;  // Element found, store its index
            break;      // Exit the loop as soon as we find the element
        }
    }

    // Check the result and display the output
    if (found != -1) {
        printf("Element %d found at index %d.\n", target, found);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

