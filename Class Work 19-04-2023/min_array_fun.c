#include <stdio.h>
int min_array(int m[],int l){
    int min=m[0];
    for (int i = 0;i<l;i++){
        if (m[i]<min){
			min = m[i];
		}
    }
    return min;
}

int main(){
    int a[] = {10,25,32,45};
    int len = sizeof(a)/sizeof(a[0]);
    int s = sum(a,len);
    printf("Sum of elements in array: %d",s);
    return 0;
}