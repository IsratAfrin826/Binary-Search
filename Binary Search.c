
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid; // Target found
        else if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 18, 21}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}
