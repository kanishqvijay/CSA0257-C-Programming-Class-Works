#include <stdio.h>

int main()
{
    int r=3,c=3;
	int a[r][c],b[r][c];
	printf("Enter Matrix A:\n");
	for (int i=0; i<r; i++){
		printf("Enter row %d values(eg: 1 2 3):",i+1);
		for (int j = 0; j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Matrix B:\n");
	for (int i=0; i<r; i++){
		printf("Enter row %d values(eg: 1 2 3):",i+1);
		for (int j = 0; j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int eql = 1;
	for (int i =0; i<3; i++){
	    for (int j = 0; j<3; j++){
	        if (a[i][j] != b[i][j]){
	            eql = 0;
	            break;
	        }
	    }
	    if (eql == 0){
	        break;
	    }
	}
	printf("\nResult: ");
	if (eql == 0){
	    printf("Matrix A and Matrix B are not equal matrix");
	} else{
	    printf("Matrix A and Matrix B are equal matrix");
	}
	

    return 0;
}