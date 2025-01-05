#include<stdio.h>
int main()
{
	int rows;
	int i,j,k;
	printf("Enter the row:");
	scanf("%d",&rows);
	//first loop for printing the rows
	
	for(i=0;i<rows;i++){
		
		//loop printing leading space
		for(k=0;k<2*(rows-i)-1;k++){
			printf(" ");
		}
		//loop for printing char each rows
		for(j=0;j<=i;j++){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
}
