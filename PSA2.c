// #include<stdio.h>
// int main(){
//     int intType;
//     float floatType;
//     double doubleType;
//     char charType;


//     printf("Size of int:%zu bytes\n",sizeof(intType));
//     printf("Size of float:%zu bytes\n",sizeof(floatType));
//     printf("Size of double:%zu bytes\n",sizeof(doubleType));
//     printf("Size of char:%zu bytes\n",sizeof(charType));

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int c;
//     printf("Enter a value:");
//     c=getchar();
//     printf("\nYou entered");
//     putchar(c);
//     return 0;
// }

#include<stdio.h>
#include<conio.h>
void main(){
    // char str[100];
    // printf("Enter a value:");
    // grts(str);
    // printf("\nyou entered ");
    // puts(str);
    // return 0;
    int a,b,c;
	
	a=6;
	b=4;
	c=a>b ? a:b;
	printf("%d",c);

	getch();
}
