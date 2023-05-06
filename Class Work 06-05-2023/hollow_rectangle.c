#include <stdio.h>

int main(){
	int a,b;
	printf("Enter lenght:\n");
	scanf("%d",&a);
	printf("Enter breadth:\n");
	scanf("%d",&b);
	for (int i = 0; i<a; i++){
		for (int j = 0;j<b;j++){
			if (i==0||j==0||i==a-1||j==b-1){
			    printf("*");
			} else {
			    printf(" ");
			}
	    }
	    printf("\n");
    }
}