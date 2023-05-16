#include <stdio.h>

int add(int a, int b){
	return a+b;
}

int main(){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("\nEnter b:");
	scanf("%d",&b);
	int sum = add(a,b);
	printf("Sum of %d and %d is %d",a,b,sum);
}