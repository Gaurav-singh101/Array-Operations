#include<stdio.h>

void merge_sort(int arr1[], int x, int arr2[], int y, int sort_Array[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays
    while (i < x && j < y) {
        if (arr1[i] <= arr2[j]) {
            sort_Array[k] = arr1[i];
            i++;
        } else {
            sort_Array[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arr1
    while (i < x) {
        sort_Array[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < y) {
        sort_Array[k++] = arr2[j++];
    }
}

int main() {
    int n, m;

    // Input for first array size
    printf("Enter 1st array size: ");
    scanf("%d", &n);

    // Input for second array size
    printf("Enter 2nd array size: ");
    scanf("%d", &m);

    int arr1[n], arr2[m];

    // Input for first array elements
    printf("Enter first array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array elements
    printf("Enter second array elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array to store the result
    int merged[n + m];

    // Call merge_sort function
    merge_sort(arr1, n, arr2, m, merged);

    // Output the merged array
    printf("Merged array: ");
    for (int i = 0; i < (n + m); i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
