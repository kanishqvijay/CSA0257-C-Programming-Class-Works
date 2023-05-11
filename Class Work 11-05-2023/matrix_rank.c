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
    printf("\n");
    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    if (det != 0){
        printf("Matrix A rank is 2");
    } else if ((a[0][0]*a[0][0] + a[0][1]*a[0][1] + a[1][0]*a[1][0] + a[1][1]*a[1][1]) == 0){
        printf("Matrix A rank is 0");
    } else{
        printf("Matrix A rank is 1");
    }
    return 0;
}
