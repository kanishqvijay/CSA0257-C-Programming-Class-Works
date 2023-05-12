#include <stdio.h>

int main(){
	int r=3,c=3;
	int a[r][c];
	for (int i=0; i<r; i++){
		printf("Enter row %d values(eg: 1 2 3):",i+1);
		for (int j = 0; j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<r;i++){
	    for (int k = 0; k<i; k++){
	        printf("  ");
	    }
		for(int j = i;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}