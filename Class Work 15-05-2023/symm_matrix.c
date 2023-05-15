#include <stdio.h>

int main()
{
    int r=3,c=3;
	int a[r][c];
	for (int i=0; i<r; i++){
		printf("Enter row %d values(eg: 1 2 3):",i+1);
		for (int j = 0; j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sym = 1;
	for (int i =0; i<3; i++){
	    for (int j = 0; j<3; j++){
	        if (a[i][j] != a[j][i]){
	            sym = 0;
	            break;
	        }
	    }
	    if (sym == 0){
	        break;
	    }
	}
	printf("Transpose of A:\n");
	for (int i =0; i<3;i++){
	    printf("|");
	    for (int j=0; j<3;j++){
	        printf("%3d ",a[j][i]);
	    }
	    printf("|\n");
	}
	printf("\n Result:");
	if (sym == 0){
	    printf("Matrix A is not a symmetric matrix");
	} else{
	    printf("Matrix A is a symmetric matrix");
	}
	

    return 0;
}
