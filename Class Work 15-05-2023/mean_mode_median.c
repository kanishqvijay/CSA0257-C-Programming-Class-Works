#include <stdio.h>

float mean(int arr[],int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum/(float) n;
}

float median(int arr[],int n){
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
    bubbleSort(arr,n);
    if (n%2 == 0){
        return (arr[n/2] + arr[(n)/2 +1])/ 2.0;
    } else {
        return (float) arr[n/2];
    }
}

void mode(int arr[], int n){
    int result[n];
	int res_len = 0;
	int found;
	for (int i = 0; i < n; i++ ){
		found = 0;
		for (int j = 0; j<=res_len; j++ ){
			if (result[j] == arr[i]){
				found = 1;
				break;
			}
		}
		if (!found){
			result[res_len] =  arr[i];
			res_len++;
		}
	}
	int count[res_len];
	for (int i = 0; i<res_len; i++){
	    for (int j = 0; j<n; j++){
	        if (result[i] == arr[j]){
	            count[i]++;
	        }
	    }
	}
	int ind = 0;
	int max = count[0];
	for (int i = 0; i< res_len; i++){
	    if (max<count[i]){
	        max = count[i];
	        ind = i;
	    }
	}
	int s = 0;
	for (int i = 0; i<res_len; i++){
	    if (count[i] != 1){
	        s = 1;
	        break;
	    }
	}
	if (s=1){
	    printf("Mode of Array is: %d",result[ind]);
	} else{
	    printf("Mode of Array is:None");
	}
}


int main()
{
    int n;
	printf("Enter length of Array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of array(eg: 1 2 3...):");
	for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
	}
	printf("Mean of array is: %.2f\n",mean(a,n));
	printf("Median of array is: %.2f\n",median(a,n));
	mode(a,n);
	

    return 0;
}
