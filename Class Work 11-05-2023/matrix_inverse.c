#include <stdio.h>

int main()
{
    int r=2,c=2;
    float a[r][c];
    for (int i=0; i<r; i++){
        printf("Enter row %d values(eg: 1 2 3):",i+1);
        for (int j = 0; j<c;j++){
            scanf("%f",&a[i][j]);
        }
    }
    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    float temp;
    temp = a[1][1];
    a[1][1] = a[0][0];
    a[0][0] = temp;
    a[1][0] = -1*a[1][0];
    a[0][1] = -1*a[0][1];
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            a[i][j] = a[i][j]/det;
        }
    }
    printf("\nResulted Inverse Matrix:\n");
	for (int i = 0; i<r; i++){
		printf("| ");
		for (int j = 0; j<c; j++){
			printf("%5.2f ",a[i][j]);
		}
		printf("|\n");
	}
    return 0;
}
