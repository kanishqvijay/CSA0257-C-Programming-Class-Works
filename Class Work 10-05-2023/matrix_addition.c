#include <stdio.h>

int main(){
	int r1,c1,r2,c2;
	printf("Enter number of rows and column of matrix 1 (format: 'row column'):");
	scanf("%d %d",&r1,&c1);
	printf("Enter number of rows and column of matrix 2 (format: 'row column'):");
	scanf("%d %d",&r2,&c2);
	if (r1!=r2 || c1!=c2){
		return 0;
	}
	int a[r1][c1], b[r2][c2], c[r2][c2];
	for (int i = 0; i<r1; i++){
		printf("Enter row %d of matrix 1 (format: '1 2 3')",i+1);
		for (int j = 0; j<c1; j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	for (int i = 0; i<r2; i++){
		printf("Enter row %d of matrix 2 (format: '1 2 3')",i+1);
		for (int j = 0; j<c2; j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (int i = 0; i<r2; i++){
		for (int j = 0; j<c2; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nResulted Sum Matrix:\n");
	for (int i = 0; i<r2; i++){
		printf("| ");
		for (int j = 0; j<c2; j++){
			printf("%d ",c[i][j]);
		}
		printf("|\n");
	}
	
}