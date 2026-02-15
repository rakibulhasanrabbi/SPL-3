#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of floating point numbers: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d floating point numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = sum / n;
    printf("Average of the floating point numbers: %.2f\n", average);

    return 0;
}
