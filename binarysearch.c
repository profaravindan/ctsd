#include <stdio.h>

int main() {
    int size, target;
    
    // Get user input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Get user input for the array elements
    printf("Enter %d elements for the array (sorted order): \n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get user input for the element to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search directly in the main function
    int low = 0, high = size - 1;
    int found = -1;  // Variable to store index of the found element

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            found = mid;  // Element found, store the index
            break;        // Exit the loop as soon as we find the element
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Output the result
    if (found != -1) {
        printf("Element %d found at index %d.\n", target, found);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

