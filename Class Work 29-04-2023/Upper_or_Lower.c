#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character is in upper case\n");
    }
    else if (islower(ch)) {
        printf("The character is in lower case\n");
    }
    else {
        printf("The character is not an alphabet\n");
    }

    return 0;
}