#include <stdio.h>

int capitalise(char a[]){
	for(int i = 0; a[i]; i++){
	    if (i==0 || (a[i-1] == ' ')){
	        if (('a'<=a[i] && a[i]<='z')){
	            a[i] = a[i]-32;
	        }
	    }
	}
}

int main(){
	char a[100];
	printf("Enter a:");
	scanf("%[^\n]s", a);
	capitalise(a);
	printf("%s",a);
}