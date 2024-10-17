#include <stdio.h>

// Function to perform Bubble Sort

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    
    int n;

    // Prompt user for the size of the array
    printf("Enter array size: ");
    scanf("%d", &n);

    // Validate the size to ensure it's positive
    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Declare the array with the user-defined size
    int arr[n];

    // Prompt user to enter elements into the array
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted elements in array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
