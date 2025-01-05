#include<stdio.h>
int main()
{
	// switch
	int choice;
	printf("Enter your choice between 1 to 7:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("its Monday");
			break;
		case 2:
			printf("its Tuesday");
			break;
		case 3:
			printf("its Wednesday");
			break;
		case 4:
			printf("its Thursday");
			break;
		case 5:
			printf("its Friday");
			break;
		case 6:
			printf("its Saturday");
			break;
		case 7:
			printf("its Sunday");
			break;
			default:
				printf("invalid number");
			
	}
	return 0;
}
