#include <stdio.h>

int main(){
  int a,even=0,odd = 0;
  printf("Enter N:\n");
  scanf("%d",&a);
  for (int i = 0;i<=a;i++){
    if (i%2==0){
      even += i;
    }
    else {
      odd += i;
    }
  }
  printf("Sum of even:%d\n",even);
  printf("Sum of odd:%d\n",odd);
}