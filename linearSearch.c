#include <stdio.h>

// o(n),o(n/2),o(1)
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 23, 29, 34, 42};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}

