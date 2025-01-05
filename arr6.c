#include<stdio.h>
int main()
{
	//add matrix  //2D  Arrray
	float a[3][3], b[3][3],result[3][3];
	int i,j;
	//taking  input using nested for loop
	printf("Enter the elements for first matrix:\n");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("enter A%d%d:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements for second matrix:\n");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("enter B%d%d:",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			result[i][j]=a[i][j]-b[i][j];
		}
	}
	//display result
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("%f\t",result[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}
}
