#include<stdio.h>
int sum(int n);


int main(){
	
	int number , result ;
	printf("Enter a positive number:");
	scanf("%d",&number);
	
	result=sum(number);
	printf("sum=%d",result);
	
}

int sum(int n ){
	if(n!=0){
	
	
	// sum() recurtion 
		
		return n+sum(n-1);
	}
	else{
		return n;
	}
}
