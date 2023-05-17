#include <stdio.h>

int isVowel(char c){
	char a[]= "aeiouAEIOU";
	for(int i = 0; a[i]; i++){
		if (a[i] == c){
			return 1;
		}
	}
	return 0;
}

int main(){
	char a;
	printf("Enter a:");
	scanf("%c",&a);
	int vow = isVowel(a);
	if (!vow){
		printf("'%c' is not a vowel",a);
	} else{
		printf("'%c' is a vowel",a);
	}
}