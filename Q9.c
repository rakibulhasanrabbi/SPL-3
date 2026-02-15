#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter the number of alphabets: ");
    scanf("%d", &n);

    char arr[n];

    printf("Enter %d alphabets: ", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); // Note the space before %c to consume any leading whitespace
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        char ch = toupper(arr[i]); // Convert to uppercase to simplify checking
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
