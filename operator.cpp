#include<stdio.h>

int main()
{
	int a,b,c;
	int max;
	printf("Enter a value of a and b:");
	scanf("%d %d %d", &a,&b,&c);
	
	// using ternary operators
	max=(a>b)?a:b;
	printf("%d",max);
	printf("max number=" max);
	return 0;
}
