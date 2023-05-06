#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int vow = 0;
	printf("Enter string:");
	scanf("%s",str);
	for (int i=0;str[i];i++){
		if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			vow++;
		}
	}
	printf("Total number of vowels=%d\n",vow);
	return 0;
}