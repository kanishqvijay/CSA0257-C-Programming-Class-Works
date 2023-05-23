#include <stdio.h>

int power(int a,int n){
	if (n ==0){
		return 1;
	}
	return a*power(a,n-1);
}

int main(){
	int a,n;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter n:");
	scanf("%d",&a);
	int s = power(a,n);
	printf("%d raised to %d: %d",a,n,s);
}