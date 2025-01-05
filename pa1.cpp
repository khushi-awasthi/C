//pyramid/ right half
//*
//**
//***
//****
//*****
#include<stdio.h>
int main()
{
	int rows;//=5;
	int i,j;
	printf("enter the rows");
	scanf("%d",&rows);
	//first loop for printing rows
	for(i=0;i<=rows;i++){
		//second for loop for printing char each rows
		for(j=0;j<=i;j++){
			printf("%c",'C'+j);
		}
		
		
		printf("\n");
	}
	
	return 0;
}
