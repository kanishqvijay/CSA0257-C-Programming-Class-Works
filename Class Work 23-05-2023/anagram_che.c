#include <stdio.h>
#inculde <string.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
    
void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

int anagram(char a[],char b[]){
	bubbleSort(a,strlen(a));
	bubbleSort(b,strlen(b));
	if (strcmp(a,b) == 0){
		printf("They are anagrams");
	} else{
		printf("They are not anagrams");
	}
	
}

int main(){
	char a[100],b[100];
	printf("Enter a:");
	scanf("%s", a);
	printf("Enter b:");
	scanf("%s", b);
	anagram(a,b);
}