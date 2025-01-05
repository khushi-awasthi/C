//write a program 
#include<stdio.h>
int main()
{
	
	int n1=36,n2=60,i;
	int small=(n1<n2)?n1:n2;
	int hcf=1;
	for(i=1;i<=small;i++){
		if(n1%i==0 && n2%i==0){
			hcf=i;
		}
	}
	printf("%d",hcf);
	
}
