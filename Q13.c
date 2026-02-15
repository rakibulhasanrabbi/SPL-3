#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input for the number of integers.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int position;
    printf("Enter the position to delete (0-based indexing): ");
    scanf("%d", &position);
    
    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // updated array
    printf("\nUpdated Array:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
