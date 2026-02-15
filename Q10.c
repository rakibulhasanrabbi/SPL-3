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

    int searchNum;
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);

    int found = 0; // Flag to indicate if the number is found
    printf("Search results:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            printf("FOUND at index position: %d\n", i);
            found = 1; // Set the flag to indicate that the number is found
        }
    }

    // If the number is not found, print "NOT FOUND"
    if (!found) {
        printf("NOT FOUND\n");
    }

    return 0;
}
