 #include <stdio.h>

int main() {
    int i, j, k;

    // Upper half of the diamond
    for (i = 5; i >= 1; i--) {
        // Print spaces before numbers
        for (j = 1; j < i; j++) {
            printf("_");
        }

        // Print numbers in descending order
        for (k = 5; k >= i; k--) {
            printf("%d", k);
        }

        // Print numbers in ascending order
        for (k = i + 1; k <= 5; k++) {
            printf("%d", k);
        }

        // Move to the next line
        printf("\n");
    }

    // Lower half of the diamond
    for (i = 2; i <= 5; i++) {
        // Print spaces before numbers
        for (j = 1; j < i; j++) {
            printf("-");
        }

        // Print numbers in descending order
        for (k = 5; k >= i; k--) {
            printf("%d", k);
        }

        // Print numbers in ascending order
        for (k = i + 1; k <= 5; k++) {
            printf("%d", k);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
  
