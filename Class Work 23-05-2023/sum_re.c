#include <stdio.h>

int sum(int n){
	if (n <=1){
		return 1;
	}
	return n+sum(n-1);
}

int main(){
	int a;
	printf("Enter n:");
	scanf("%d",&a);
	int s = sum(a);
	printf("Sum of %d natural numbers: %d",a,s);
}