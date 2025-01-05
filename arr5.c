#include<stdio.h>
int main()
{
	//add matrix  //2D  Arrray
	float a[2][2], b[2][2], result[2][2];
	int i,j;
	//taking  input using nested for loop
	printf("Enter the elements for first matrix:\n");
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			printf("enter A%d%d:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	//Second element
	printf("Enter the elements for second matrix:\n");
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			printf("enter B%d%d:",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	//sum of two matrix
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	//display result
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			printf("%f\t",result[i][j]);
			if(j==1){
				printf("\n");
			}
		}
	}
	
}
