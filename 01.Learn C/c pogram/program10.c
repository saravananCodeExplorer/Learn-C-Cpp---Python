//10. Check if a Number is a Power of Two.
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    int num = 32;

    if (isPowerOfTwo(num)) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

    return 0;
}
