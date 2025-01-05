#include<stdio.h>
int main(){

char grade;
printf("Enter the grade:");
scanf("%c",&grade);

switch(grade){
	case 'A':
	case 'a':
		printf("Good");
		break;
	case'B':
	case'b'
		printf("Not bad");
		break;
	case'C':
	case'c':
		printf("bad");
		break;
	case'D':
	case'd':
		printf("very bad");
		break;
	default:
		printf("not matched");
}
return 0;
}
