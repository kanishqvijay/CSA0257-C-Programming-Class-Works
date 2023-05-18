#include <stdio.h>
int sum(int m[],int l){
    int sum=0;
    for (int i = 0;i<l;i++){
        sum += m[i];
    }
    return sum;
}

int main(){
    int a[] = {10,25,32,45};
    int len = sizeof(a)/sizeof(a[0]);
    int s = sum(a,len);
    printf("Sum of elements in array: %d",s);
    return 0;
}
