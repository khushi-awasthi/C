// check if number is prime.
// #include <stdio.h>
// int main()
// {
// 	int a, i, f = 0;
// 	printf("Enter a number");
// 	scanf("%d", &a);
// 	for (i = 1; i <= a; i++)
// 		if (a % i == 0)
// 			f = f + 1;
// 	if (f == 2)
// 		printf("Prime number");
// 	else
// 		printf("Not prime");
// 	return 0;
// }

// find the sum of all prime numbers upto n.
// #include <stdio.h>
//     int main()
//     {
//      int i,a,count,add =0,n;
//      printf("enter the number");
// 	 scanf("%d",&n);
//      for (i=1;i<n;i++)
//      {
//          count=0;
//              for (a=1;a<=i;a++)
//              {
//                 if (i%a==0)
//                     count++;

//              }
//          if (count==2)
//              printf("%d \n",i);
//              add = add + count;

//      }

//      printf("The sum of prime numbers %d ",add);
//      return 0;
//     }
// check if the number is an armstrong number.
// #include<stdio.h>
// int main(){
// 	int n,num,r,res=0;
// 	printf("Enter a numbeer:");
// 	scanf("%d",&num);
// 	n=num;
// 	while(n!=0){
// 	r=n%10;
// 	res=res+(r*r*r);
// 	n=n/10;
// 	}
// 	if(res==num)
// 	printf("Armstrong");
// 	else
// 	printf("Not armstrong");

// }
// determine if a number is palindrome or not.
// #include<stdio.h>
// int main(){
// 	int a,b,s=0,t;
// 	printf("Enter a number:");
// 	scanf("%d",&a);
// 	t=a;
// 	while(a>0){
// 	b=a%10;
// 	s=s*10+b;
// 	a=a/10;
// 	}
// 	if(s==t)
// 	printf("Palindrome");
// 	else
// 	printf("Not Palindrome");

// }
// print the first n perfect numbers.
// #include <stdio.h>

// int isPerfect(int num);

// int main() {
//     int n, count = 0, i = 1;
//     printf("Enter the number of perfect numbers to print: ");
//     scanf("%d", &n);

//     printf("The first %d perfect numbers are:\n", n);
//     while (count < n) {
//         if (isPerfect(i)) {
//             printf("%d ", i);
//             count++;
//         }
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// Function to check if a number is perfect
// int isPerfect(int num) {
//     int sum = 0;
//     for (int i = 1; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     return (sum == num);
// }
#include<stdio.h>
// int main(){
//     int n,i ,count=0;
//     printf("Enter thr number");
//     scanf("%d",&n);
//     while(n>0){
//     if(n%10!=0){
//         count++;
//     }
//     n++;
//     }
//     printf("%d",count);
// }
// first and last digit of a number and their sum------------
// int main(){
//     int a,first,last;
//     printf("enter no\n");
//     scanf("%d",&a);
//     last=a%10;
//     printf("last digit of number=%d\n",last);
//     first=a;
//     while(first>=10){
//        first=first/10;
        
//     }

    
//     printf("first digit of a number=%d\n",first);
//     int temp;{
//     int swap=a;
//     temp=last;
//     last=first;
//     first=temp;
//     printf("%d",swap);
//     }
//     printf("sum of first digit of number=%d",first+last);

// }
// int main(){
//     int i,j;
//     for(i=1;i<5;i++){
//         printf("\n");
//          for(j=i;j<=5;j++)
//         printf("*");
//     }
// }

// even // odd

/** 
 * C program to check even or odd using functions
 */

#include <stdio.h>


/**
 * Function to check even or odd
 * Returns 1 is num is even otherwise 0
 */
// int isEven(int num)
// {
//     return !(num & 1);
// }


// int main()
// {
//     int num;
    
//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);
    
    
//     /* If isEven() function returns 0 then the number is even */
//     if(isEven(num))
//     {
//         printf("The number is even.");
//     }
//     else
//     {
//         printf("The number is odd.");
//     }
    
//     return 0;
// }

void main(){
    int a, b, *p;
    a=10;
    p=&a;
    b=*p+20;
    printf("%d",b);
}