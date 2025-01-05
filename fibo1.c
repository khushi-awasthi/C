#include<stdio.h>
int main()
{	
int n;
int i,t1=0,t2=1, next;
	printf("Enter the value of n=");
	scanf("%d",&n);
	printf("\n %d %d ",t1,t2);
	for(i=2;i<n;i++){
		next=t1+t2;
		//0+1
		//next=1
		printf("%d ",next);
		t1=t2;
		t2=next;
	}
	return 0;
}
