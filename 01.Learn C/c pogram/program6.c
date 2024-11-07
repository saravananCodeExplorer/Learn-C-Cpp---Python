//6. Find the Largest Element in an Array
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The largest element is %d\n", largest);

    return 0;
}

