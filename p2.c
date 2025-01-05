#include<stdio.h>
int main(){

//print square patttern
int rows, cols, i, j; 
printf("Enter the rows");
scanf("%d",&rows);
cols=rows;
//print the square pattern
for (i=1;i<=rows;i++){
	for(j=1;j<=cols;j++){
		printf("* ");//printf("%d",&j);
	}

printf("\n");
}
return 0;
}

