#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]){
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l){
        if (str[l++] != str[h--]){
            printf("%s is not a palindrome string\n", str);
            return;
        }
    }

    printf("%s is a palindrome string\n", str);
}


int main(){
    char a[] = "racecar";
    isPalindrome(a);
    return 0;
}
