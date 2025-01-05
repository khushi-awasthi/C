#include<stdio.h>
int main()
{
	//print triangle pattern
	int rows,i,j;
	printf("Enter the rows:");
	scanf("%d",&rows);
	//print the triangle pattern
	for(i=1;i<=rows;i++){
		//print space
		for(j=1;j<=rows;j++){
			
			printf(" ");
		}
		//print star
		for(j=1;j<=i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
