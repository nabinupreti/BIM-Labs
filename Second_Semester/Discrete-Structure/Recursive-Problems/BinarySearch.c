#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
        else
            return binarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter key to search: ");
    scanf("%d",&key);
    int index = binarySearch(arr, 0, n - 1, key);
    if (index == -1)
        printf("%d not found in the array", key);
    else
        printf("%d found at index %d", key, index);
    return 0;
}

