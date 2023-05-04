#include <stdio.h>

int main() {
    int temp;

    printf("Enter the temperature in degrees Celsius: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("It's very cold\n");
    }
    else if (temp < 20) {
        printf("It's cold\n");
    }
    else if (temp < 30) {
        printf("It's warm\n");
    }
    else {
        printf("It's hot\n");
    }

    return 0;
}