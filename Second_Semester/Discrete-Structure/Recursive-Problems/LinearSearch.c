/*Wap to implement recursive algorithm
-to implement linear search*/
#include <stdio.h>

int linear_search(int array[], int size, int key) {
    if (size == -1) {
        return size;
    } else if (array[size] == key) {
        return size;
    } else {
        return linear_search(array, size - 1, key);
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);
    int key;
    printf("Enter a key to search for: ");
    scanf("%d", &key);
    int result = linear_search(array, size-1, key);
    if (result == -1) {
        printf("Key not found in array\n");
    } else {
        printf("Key found at index %d\n", result);
    }
    return 0;
}


