#include <stdio.h>
 
int main()
{
    int i,n1,n2;
    printf("Enter size of the array 1 : ");
    scanf("%d",&n1);
	int a[n1];
 
    printf("Enter elements in array 1: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter size of the array 1 : ");
    scanf("%d",&n2);
	int b[n2];
 
    printf("Enter elements in array 1: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }
	int result[n1+n2];
	int res_len = 0;
	int found;
	for (int i = 0; i<n1; i++){
		result[i] = a[i];
	}
	for (int i = 0; i<n2; i++){
		result[n1+i] = b[i];
	}
	
	printf("The merged array:\n");
	for (int k = 0; k<n1+n2; k++){
	    printf("%d,",result[k]);
	}
}
	