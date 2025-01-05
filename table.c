//table
#include<stdio.h>
int main(){

//do while loop
int i=1,n;
int table;
printf("Enter a value:");
scanf("%d",&n);
do{
	table=n*i;
	printf("%d*%d=%d\n",n,i,table);
	i++;
}
while(i<=10);

return 0;
}
