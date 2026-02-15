#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int number, position;
    printf("Enter the number to insert: ");
    scanf("%d", &number);
    printf("Enter the position to insert (0-based indexing): ");
    scanf("%d", &position);
    
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    
    for (int i = n - 1; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[position] = number;
    
    //  updated array
    printf("\nUpdated Array:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
