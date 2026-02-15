#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d positive integers: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for ( i = 1; i < n; i += 2) {
        A[i] = 0;
    }

    printf("Array after replacing odd-indexed elements with 0:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
