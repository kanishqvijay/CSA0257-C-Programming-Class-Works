#include <stdio.h>
#include <math.h>

int isArmstrong(int n){
    int c1,c3,len = 0,d,ams=0;
    c1 = c3 = n;
    while (c3>0){
        d = c3%10;
        len++;
        c3 = c3/10;
        
    }
    while (c1>0){
        d = c1%10;
        ams = ams+pow(d,len);
        c1 = c1/10;
    }
    if (ams == n){
        printf("\n%d is a armstrong number",n);
    }  else{
        printf("\n%d is not a armstrong number",n);
    }
}

int isPerfect(int n){
    int rem=0;
    for (int i = 1; i<n; i++){
        if(n%i == 0){
            rem += i;
        }
    }
    if (rem == n){
        printf("\n%d is a perfect number",n);
    }  else{
        printf("\n%d is not a perfect number",n);
    }
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    isPerfect(n);
    isArmstrong(n);
}