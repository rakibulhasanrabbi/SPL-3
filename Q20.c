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

    
    int unionArray[n + m];
    int unionSize = 0;

    
    for (int i = 0; i < n; i++) {
        unionArray[unionSize++] = A[i];
    }

    
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < unionSize; j++) {
            if (B[i] == unionArray[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArray[unionSize++] = B[i];
        }
    }

    printf("Union of arrays A and B:\n");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");

    return 0;
}
