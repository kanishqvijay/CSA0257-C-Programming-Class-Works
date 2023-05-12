#include <stdio.h>

int main(){
	int a[] = {12,34,45,32,67,13,4};
	int largest, smallest, ssmallest, slargest;
	largest = smallest = ssmallest = slargest = a[0];

	for (int i = 0;i<sizeof(a)/sizeof(a[0]); i++){
		if (a[i]>largest){
			largest = a[i];
		}
		if (a[i]<smallest){
			smallest = a[i];
		}
		if (a[i] > slargest && a[i]!=largest){
			slargest = a[i];
		}
		if (a[i] < ssmallest && a[i]!=smallest){
			ssmallest = a[i];
		}
	}
	printf("The second largest in array is %d",slargest);
	printf("The second smallest in array is %d",ssmallest);
}