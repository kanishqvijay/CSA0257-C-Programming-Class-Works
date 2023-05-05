#include <stdio.h>

int main(){
  int n;
  printf("Enter n:\n");
  scanf("%d",&n);
  int sum=0;
  for(int i=1; n>=i;i++){
    sum += i;
  }
  printf("Sum of %d natural numbers: %d",n,sum);
  
}