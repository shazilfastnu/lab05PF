#include<stdio.h>
int main(){
	int integer;
	printf("Enter any integer : ");
	scanf("%d",&integer);
	(integer%2 == 0) ? printf("%d is an Even number",integer):
	(integer%3 == 0) ? printf("%d is a Odd number",integer):
	printf("%d is Odd and not divisible by 3.",integer);
	return 0;
}

