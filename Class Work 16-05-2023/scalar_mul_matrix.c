#include <stdio.h>

void scalarMultiply(int a[3][3], int n){
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3; j++){
			a[i][j] *= n; 
		}
	}
	
}
int main(){
	int r=3,c=3;
	int n;
	printf("Enter scalar value:");
	scanf("%d",&n);
	int a[r][c];
	printf("Enter Matrix A:\n");
	for (int i=0; i<r; i++){
		printf("Enter row %d values(eg: 1 2 3):",i+1);
		for (int j = 0; j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scalarMultiply(a,n);
	printf("Scalar Product of A:\n");
	for (int i =0; i<3;i++){
	    printf("|");
	    for (int j=0; j<3;j++){
	        printf("%3d ",a[j][i]);
	    }
	    printf("|\n");
	}
	
}