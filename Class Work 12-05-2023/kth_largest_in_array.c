#include <stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main(){
	int arr[] = { 10,40,30,60 };
	int k;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Value of K:");
	scanf("%d",&k);
	bubbleSort(arr,n);
	printf("%dth largest in array is: %d",k,arr[n-k]);
}
