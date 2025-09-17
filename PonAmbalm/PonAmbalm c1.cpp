#include<stdio.h>
int main (){
	int number;
	int lastdigit;
	printf("Enter an integer:");
	scanf("%d",&number);
	lastdigit =number%10;
	if(lastdigit %3==0)
	 printf("The last digit (%d) of the given number is divisible by 3\n" ,lastdigit);
	else{
		printf("The last digit(%d)of the given number is divisible by 3\n",lastdigit);
	}
	return 0;
}
