#include <stdio.h>

int main(){
	int a;
	printf("Enter lenght:\n");
	scanf("%d",&a);
	for (int i = 0; i<a; i++){
		for (int j = a;j>i;j--){
			printf(" ");			
		}
		for (int k = 0; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
}