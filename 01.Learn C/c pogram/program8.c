//8. Reverse an Array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Array to be reversed
    int size = sizeof(arr) / sizeof(arr[0]);
   


    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed array:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
