#include<stdio.h>
int main()
{
	int n,sum=0,i,marks[10];
	double avg;
	printf("Enter the number of elements 1 to 10: ");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		printf("Enter the number array[%d]:", i+1);
		scanf("%d" ,&marks[i]);
		sum+=marks[i];
	}
	avg=(double)sum/n;
	printf("result=%lf",avg);
}
