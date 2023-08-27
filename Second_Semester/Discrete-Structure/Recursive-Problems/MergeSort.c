#include <stdio.h>
// Merge two sorted subarrays into a larger sorted array
void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    int i = 0, j = 0, k = 0;

    // Merge the left and right subarrays in ascending order
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    // Copy any remaining elements from the left subarray
    while (i < left_size) {
        arr[k++] = left[i++];
    }

    // Copy any remaining elements from the right subarray
    while (j < right_size) {
        arr[k++] = right[j++];
    }
}

// Sort an array using merge sort
void merge_sort(int arr[], int n) {
    if (n < 2) {
        return;  // base case: array is already sorted
    }

    int mid = n / 2;

    // Divide the array into two subarrays
    int left[mid];
    int right[n - mid];
	int i;
    for (i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    // Sort the left and right subarrays recursively
    merge_sort(left, mid);
    merge_sort(right, n - mid);

    // Merge the sorted subarrays
    merge(arr, left, mid, right, n - mid);
}

// Test the merge sort algorithm
int main() {
    int arr[] = {68,84,75,82,68,90,62,88,76,93};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i,j;
    printf("Unsorted array:\n");
    for ( i = 0; i < n; i++) {
		printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, n);
    printf("\nSorted array:\n");
    for ( i = 0; i < n; i++) {
		printf("%d ", arr[i]);
    }
    return 0;
}

