//Array
//#include<stdio.h>
//int main(){
//	int i=0;
//	int array[5]={2,3,4,7,8};
//	array[3]=100;
	
//	for(i;i<5;i++){
//		printf(" array[%d]=%d\n",i, array[i]);
//	}
//}

#include<stdio.h>
int main()
{
	int i=0;
	char array[3]={'A','B','C'};
	array[2]='G';
	for(i;i<3;i++){
		printf("array[%d]=%c\n",i,array[i]);
	}
}
