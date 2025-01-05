// positive/negative-------------
// #include <stdio.h>
// #include<conio.h>
// void main()
// {
//     int a;
//     printf("enter a number");
//     scanf("%d",&a);
//     if(a>0){
//         printf("Number is positive");
//     }
//     else if(a<0){
//         printf("number is negative");
//     }
//     else{
//         printf("0 is not negative not positive");
//     }
//     getch();
// }

//Largest of 3 numbers-------------------
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter first number");
//     scanf("%d",&a);
//     printf("enter second number");
//     scanf("%d",&b);
//     printf("enter third number");
//     scanf("%d",&c);

//     if(a>b && a>c){
//         printf("a is largest number");
//     }
//     else if(b>a && b>c){
//         printf("b is the largest number");
//     }
//     else{
//         printf("c is the largest number");
//     }

// }

//A to Z & a to b--------------
#include<stdio.h>
int main(){
    char ch;
    //for(ch='A';ch<='Z';++ch){
    for(ch='a';ch<='z';++ch){
    printf("%c ",ch);
    }
    return 0;
}