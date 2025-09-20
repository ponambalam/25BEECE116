#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d\n",&n);
	char str[n];
	scanf("%d\n",&n);
	int len = strlen(str);
	for (int i =0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			printf("Not a palindrome");
			return 0;
		}
	}
	printf("IS A Palindrome");
	return 0;
}