//palindrome

#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}  
	printf("\n original number=%d ",temp);
	printf("\n reverse number=%d",sum);
	if(temp==sum)
	printf("\n palindrome number");
	else
	printf("\n not palindrome");
	return 0;
}
