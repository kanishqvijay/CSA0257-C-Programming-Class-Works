#include <stdio.h>
int max_2_array(int m[],int l){
    int max=m[0];
    for (int i = 0;i<l;i++){
        if (m[i]>max){
			max = m[i];
		}
    }
    int max2 = m[0];
    for (int i = 0;i<l;i++){
        if ((m[i]>max2)&&(m[i]!=max)){
			max2 = m[i];
		}
    }
    return max2;
}

int main(){
    int a[] = {20,25,12,45,64,2,34,999};
    int len = sizeof(a)/sizeof(a[0]);
    int s = max_2_array(a,len);
    printf("2nd Maximum of elements in array: %d",s);
    return 0;
}