// WAP to add three numbers using pointer.
// #include<stdio.h>
// int main(){
//     int a,b,c,*ptr,*qtr,*str,sum;
    
//     printf("Enter three number:");
//     scanf("%d%d%d\n",&a,&b,&c);
//     ptr=&a;
//     qtr=&b;
//     str=&c;
//     sum=*ptr+*qtr+*str;
//     printf("%d",sum);
//     return 0;
// }
// WAP to add two numbers using call by rference.
// #include<stdio.h>
// int add(int*,int*);
// int main(){
//     int a,b,sum;
//     printf("Enter two number");
//     scanf("%d%d",&a,&b);
//     sum=add(&a,&b);
//     printf("%d",sum);
//     return 0;
// }
// int add(int*q,int*p)
// {
//     int c;
//     c=*q+*p;
//     return c;
// }
// // WAP to swap three elements using call by reference.
// #include<stdio.h>
// void swap(int*,int*,int*);
// int main(){
//     int a,b,c;
//     printf("Enter three numbers:");
//     scanf("%d%d%d",&a,&b,&c);
//     swap(&a,&b,&c);
//     printf("After swapping values are%d%d%d",a,b,c);
// }
// void swap(int*p,int*q,int*r){
//     int e;
//     e=*p;
//     *p=*q;
//     *q=*r;
//     *r=e;
// }
// WAP to store n number of elements in array and print the elements using pointer.
// #include<stdio.h>
// int main(){
//     int a[20],*p,size,i;
//     p=&a;
//     printf("Enter the size of array");
//     scanf("%d",&size);
//     printf("Enter the  elements:");
//     for(i=0;i<size;i++)
//     scanf("%d",&a[i]);
//     printf("the elements in array:");
//     for(i=0;i<size;i++){
//     printf("%d",*p++);
//     }
// }

// calculate the length of string
// #include<stdio.h>
// int main(){
//     char a[20],*p;
//     int i=0;
//     printf("Enter the string");
//     gets(a);
//     p=&a;
    
//     while(p[i]!=NULL)
    
//         i++;
//         printf("%d",i);
// }
// count the no. of vowel and consonant using pointer-
// #include<stdio.h>
// int main(){
//     char a[20],*p;
//     int i=0;
//     int vowel=0;
//     int consonant=0;
//     printf("Enter the string");
//     gets(a);
//     p=&a;
//     while(p[i]!=NULL){
        
//         if(*p=='A'||*p=='a'||*p=='E'||*p=='e'||*p=='I',*p=='i'||*p=='O'||*p=='o'||*p=='U'||*p=='u')
//             vowel++;
//         else
//             consonant++;
//         *p++;
//     }
  
//     printf("vowel=%d,consonant=%d",vowel,consonant);   
// }
// WAP TO FIND THE LARGEST ELEMENT USING POINTER.
// WAP TO GENERATE THE PERMUTATION OF THE GIVEN STRING.
#include<stdio.h>
int fun(char s);
int main(){
    char a[20];
    int i=0;
    printf("Enter the string");
    gets(a);
    while(a[i]!='\0'){
        i++;
    }
}
int fun(char b){
        
}
