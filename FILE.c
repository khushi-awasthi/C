// 1.	Write a C Program to find area and circumference of circle.
// #include<stdio.h>
// #include<conio.h>
// int main(){
// float a,r,c;

// printf("Enter the radius of circle");
// scanf("%f",&r);
// a=3.14*r*r;
// c=2*3.14*r;
// printf("The area  of circle=%f",a);
// printf("\nThe area  of circumference=%f",c);
// return 0;
// }
// 2.Write a C Program to convert temperature from degree centigrade to Fahrenheit. 
// #include<stdio.h>
// int main(){
//     float c,f;
//     printf("Enter the temperature:");
//     scanf("%f",&c);
//     f=(c*9/5+32);
//     printf("Temperature in Fahrenheit=%f",f);
//     return 0;
// }
// 3.	Write a C Program to show swap of two numbers without using third variable.
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     printf("The numbers before swapping=%d %d",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("The numbers after swapping=%d %d",a,b);
//     return 0;
// }
// 4.Write a C Program to find greatest in 3 numbers.
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("Enter three numbers=");
//     scanf("%d%d%d",&a,&b,&c);
//     d=a>b&&a>c?a:b>a&&b>c?b:c;
//     printf("The greatest no. is=%d",d);
//     return 0;
// }
// 5.	Write a C Program to find the entered year is leap year or no
// #include <stdio.h>
// int main() {
//    int year;
//    printf("Enter a year: ");

//    scanf("%d", &year);

   
//    if (year % 400 == 0) {
//       printf("%d is a leap year.", year);
//    }
   
//    else if (year % 100 == 0) {
//       printf("%d is not a leap year.", year);
//    }
   
//    else if (year % 4 == 0) {
//       printf("%d is a leap year.", year);
//    }
   
//    else {
//       printf("%d is not a leap year.", year);
//    }

//    return 0;
// }
// 6.Write a C program to display arithmetic operator using switch case.
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("Enter two no.");
//     scanf("%d%d",&a,&b);
//     printf("1.add\n 2.sub\n 3.mul\n 4.Div\n");
//     printf("Enter your choice");
//     scanf("%d",&c);
//     switch(c)
//     {
//         case 1:
//             d=a+b;
//             break;
//         case 2:
//             d=a-b;
//             break;
//         case 3:
//             d=a*b;
//             break;
//         case 4:
//             d=a/b;
//             break;
//         default:
//             printf("Wrong choice");
//     }
//     printf("Answer=%d",d);
//     return 0;
// }

// 7.Write a C Program to print Fibonacci series up to 100.
// #include <stdio.h>

// int main() {
//     int t1 = 0, t2 = 1, nextTerm = 0;

//     printf("Fibonacci Series: ");

//     while (nextTerm <= 100) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     printf("\n");
//     return 0;
// }
// 8. WAP to find whether given no. is prime or not.
// #include<stdio.h>
// int main(){
//     int i, a,f=0;
//     printf("Enter a no.");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     if(a%i==0)
//         f=f+1;
//     if(f==2)
//         printf("Prime");
//     else
//         printf("Not Prime");
//     return 0;

// }
// 9.	Write a C Program to display sum of series   1 + 1/2  + 1/3 +……………..+1/n.
// #include <stdio.h>

// int main() {
//     int n;
//     double sum = 0.0;  // Use double for accurate division results
//     printf("Please enter a positive integer.\n");
//     printf("Enter the value of n: ");
    
//     scanf("%d", &n);

//     // Ensure n is positive
//     if (n <= 0) {
        
//         return 1;
//     }

//     for (int i = 1; i <= n; i++) {
//         sum += 1.0 / i;  // Add the reciprocal of each i to the sum
//     }

//     printf("The sum of the series is: %.6f\n", sum); // Display the sum with precision

//     return 0;
// }

// 10. WAP to print star sequence.
// #include<stdio.h>
// int main(){
//     int i ,j;
//     for(i=1;i<=4;i++)//row
//     {
//         printf("\n");
//         for(j=1;j<=i;j++)//column
//         printf("*\t");
//     }
// }

// 11.	Write a C Program to print star sequence 2:
//                  *
//            *     *
//      *     *     *
// *    *     *     *



/////////////////////////

// #include <stdio.h>

// int main()
// {
//     // int rows = 4;
//     int i,j,k;
//     // first loop is for printing the rows
//     for ( i = 0; i < 4; i++) {

//         // loop for printing leading whitespaces
//         for ( j = 0; j < 2 * (4 - i) - 1; j++) {
//             printf(" ");
//         }

//         // loop for printing * character
//         for ( k = 0; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 
// 13.Write a C Program to find square of a number using functions.
// #include<stdio.h>
// int square(int);
// int main(){
//     int a,b;
//     printf("Enter a number");
//     scanf("%d",&a);
//     b=a*a;
//     printf("The square is=%d",b);
// }
// int square(int c){
//     int d;
//     d=c*c;
//     return(d);
// }
// 14.	Write a C Program to find factorial of a number using functions.
// #include<stdio.h>
// int fact(int);
// int main(){
//     int a,r;
//     printf("Enter a number");
//     scanf("%d",&a);
//     r=fact(a);
//     printf("The factorial is =%d",r);
// }
// int fact(int b){
//     int i,f=1;
//     for(i=1;i<=b;i++)
//     f=f*i;
//     return(f);
// }
// 15.Write a C Program to find whether a string is palindrome or not using function.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[20],b[20];
//     printf("Enter a string:");
//     gets(a);
//     strcpy(b,a);
//     strrev(a);
//     if(strcmp(a,b)==0)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     }

// 16. WAP to show sum of 10 elements of array and show the average.
// #include<stdio.h>
// int main(){
//     int a[10],i,s=0,avg;
//     printf("Enter 10 elements:");
//     for(i=0;i<10;i++){
//         scanf("%d",&a[i]);
//         s=s+a[i];
//     }
//     avg=s/10;
//     printf("sum=%d",s);
//     printf("\n avg =%d ",avg);
//     return 0;
// }
// 17.	Write a C Program to find the maximum no. in an array.
// #include<stdio.h>
// int main(){
//     int a[10],i,max;
//     printf("Enter elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     max=a[0];
//     for(i=0;i<10;i++)
//     if(a[i]>=max)
//     max=a[i];
//     printf("\nmaximum number= %d",max); 
// }
// 18.	Write a C Program to sort an array.
// #include<stdio.h>
// int main(){
//     int a[10],i,j,f=0;
//     printf("Enter ten elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++){//no.of passes
//     for(j=0;j<=10-i-1;j++)//no. of steps
//     if(a[j]>a[j+1]){
//         int t;
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//         f=1;
//     }
//     if(f==0)
//      break;
//     }
//     printf("the sorted array:");
//     for(i=0;i<10;i++)
//     printf("%d\t",a[i]);
    
// }
// 21.
#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate and use a 1D array
void dynamic1DArray(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed for 1D array.\n");
        return;
    }

    printf("Enter %d elements for the 1D array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1D Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the allocated memory
}

// Function to dynamically allocate and use a 2D array
void dynamic2DArray(int rows, int cols) {
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed for 2D array rows.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for 2D array columns.\n");
            return;
        }
    }

    printf("Enter elements for the 2D array (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    int n, rows, cols;

    // 1D Array
    printf("Enter the size of the 1D array: ");
    scanf("%d", &n);
    dynamic1DArray(n);

    // 2D Array
    printf("Enter the number of rows and columns for the 2D array: ");
    scanf("%d %d", &rows, &cols);
    dynamic2DArray(rows, cols);

    return 0;
}





