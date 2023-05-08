#include <stdio.h>
 
int main()
{
    int i,n,poi;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
	int a[n];
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
	int result[n];
	int res_len = 0;
	int found;
	for (int i = 0; i < n; i++ ){
		found = 0;
		for (int j = 0; j<=res_len; j++ ){
			if (result[j] == a[i]){
				found = 1;
				break;
			}
		}
		if (!found){
			result[res_len] =  a[i];
			res_len++;
		}
	}
	printf("The non-duplicate array:\n");
	for (int k = 0; k<res_len; k++){
	    printf("%d,",result[k]);
	}
}
	