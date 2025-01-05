//Armstrong

#include<stdio.h>
int main()
{
	int n,r;
	printf("\n enter any number=");
	scanf("%d ", &n);
	int t=n;
	int s=0;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
		
	}
	if(t==s)
	printf("\n Armstrong number");
	else
	printf("\n Not armstrong number");
	return 0;
}
