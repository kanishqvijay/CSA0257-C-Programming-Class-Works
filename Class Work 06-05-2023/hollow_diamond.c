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
			if (k==0||k==i){
		        printf("* ");
		    } else{
		        printf("  ");
		    }
		}
		printf("\n");
	}
	for (int i = a-1; i>0; i--){
		for (int j = a;j>i;j--){
			printf(" ");			
		}
		for (int k = 0; k<i; k++){
		    if (k==0||k==i-1){
		        printf(" *");
		    } else{
		        printf("  ");
		    }
		}
		printf("\n");
	}
}