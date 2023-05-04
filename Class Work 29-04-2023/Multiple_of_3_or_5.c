#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d is a multiple of both 3 and 5\n", number);
    } else if (number % 3 == 0) {
        printf("%d is a multiple of 3\n", number);
    } else if (number % 5 == 0) {
        printf("%d is a multiple of 5\n", number);
    } else {
        printf("%d is not a multiple of 3 or 5\n", number);
    }

    return 0;
}
