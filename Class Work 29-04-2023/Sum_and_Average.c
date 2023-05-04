#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    float avg;

    printf("Enter numbers (enter 0 to stop): ");

    do {
        scanf("%d", &num);
        sum += num;
        count++;
    } while (num != 0);

    count--; // Exclude the terminating 0 from the count

    avg = (float)sum / count;

    printf("The sum of the numbers is %d\n", sum);
    printf("The average of the numbers is %.2f\n", avg);

    return 0;
}