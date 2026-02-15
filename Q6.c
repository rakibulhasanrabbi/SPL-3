#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter %d integers for the first array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d integers for the second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Sum of the same indexed numbers from the two arrays:\n");
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
