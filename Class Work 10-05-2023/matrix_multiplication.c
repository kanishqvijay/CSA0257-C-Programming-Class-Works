#include <stdio.h>

int main(){
	int r1,c1;
	printf("Enter number of rows and column of matrix 1 (format: 'row column'):");
	scanf("%d %d",&r1,&c1);
	
	int a[r1][c1], b[c1][r1];
	for (int i = 0; i<r1; i++){
		printf("Enter row %d of matrix 1 (format: '1 2 3')",i+1);
		for (int j = 0; j<c1; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 0; i<r1; i++){
		for (int j = 0; j<c1; j++){
			b[j][i] = a[i][j];
		}
	}
	printf("\nResulted Product Matrix:\n");
	for (int i = 0; i<c1; i++){
		printf("| ");
		for (int j = 0; j<r1; j++){
			printf("%d ",b[i][j]);
		}
		printf("|\n");
}
}