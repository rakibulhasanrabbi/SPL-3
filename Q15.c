#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of positive integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. positive Number of integers .\n");
        return 1;
    }

    int A[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Array A before replacement: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        if (A[i] % 3 == 0) {
            A[i] = -1;
        }
    }

    printf("Array A after replacement: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
