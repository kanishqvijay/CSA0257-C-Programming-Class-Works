#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int arr_gcd(int a[],int l){
    int g = a[0];
    for (int i= 1; i<l;i++){
        g = gcd(g,a[i]);
    }
    return g;
}

int arr_lcm(int a[],int l){
    int lc = a[0];
    for (int i= 1; i<l;i++){
        lc = lcm(lc,a[i]);
    }
    return lc;
}


int main(){
    int g,l;
    int a[] = {12,24,36,48};
    int len = sizeof(a)/sizeof(a[0]);
    g = arr_gcd(a,len);
    l = arr_lcm(a,len);
    printf("GCD: %d\n",g);
    printf("LCM: %d",l);
    return 0;
}
   