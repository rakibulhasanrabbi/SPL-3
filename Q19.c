#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of integers in array A: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of integers in array B: ");
    scanf("%d", &m);

    int B[m];
    printf("Enter %d positive integers for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    printf("Intersection of arrays A and B:\n");
    int found = 0; // Flag to check if intersection exists
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("Empty");
    }
    printf("\n");

    return 0;
}
