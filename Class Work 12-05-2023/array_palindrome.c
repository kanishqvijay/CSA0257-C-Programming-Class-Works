#include <stdio.h>

int main(){
	int a[] = {1,2,1};
	int n = sizeof(a)/4
	int pal = 1;
	for (int i = 0; i< n/2; i++){
		if(a[i] == a[n-1-i]){
			continue;
		}
		printf("Array is not a palindrome");
		pal = 0;
	}
	if (pal == 1){
		printf("Array is palindrome");
	}
}