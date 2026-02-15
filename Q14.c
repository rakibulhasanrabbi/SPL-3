#include <stdio.h>

int main() {
    int n, m;
    
    
    printf("Enter the number of integers for array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
   
    printf("Enter the number of integers for array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d integers for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    
  
    int min_length = (n < m) ? n : m;
    for (int i = 0; i < min_length; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    

    printf("\nAfter swapping:\n");
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Array B: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    return 0;
}
