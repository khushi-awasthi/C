#include<stdio.h>
int main()
{
	int values[5];
	int i;
	printf("Enter the integers:");
	//taking the array storing in array
	for(i=0;i<5;++i){
		scanf("%d",&values[i]);						
		
	}
	printf("Displaying integers:");
	
	for(i=0;i<5;++i){
		printf("array[%d]%d\n",i,values[i]);
	}
}
