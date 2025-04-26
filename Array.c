// #include<stdio.h>
// int main(){
//     int a[5],i;
//     printf("Enter elements");
//     for(i=0;i<5;i++)
//     scanf("%d",&a[i]);
//     printf("The  elements are \n");
//     for(i=0;i<5;i++)
//     printf("%d\n",a[i]);
// }

// sum and average of 10 elements
// #include<stdio.h>
// int main(){
//     int a[10],i,s=0,avg;
//     printf("Enter elements");
//     for(i=0;i<10;i++){
//     scanf("%d",&a[i]);
//     s=s+a[i];
// }
//     avg=s/5;
//     printf("sum=%d",s);
//     printf("average=%d",avg);

// }

// find  even and odd  numbers
// #include<stdio.h>
// int main(){
//     int a[10],i,e=0,o=0;
//     printf("Enter elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++)
//     if(a[i]%2==0)
//         e=e+1;
//     else
//     o=o+1;
//     printf("total even numbers= %d",e);
//     printf("\ntotal odd numbers= %d",o);
// }
// print maximum number
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
// print matrix=====
// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("The matrix is\n");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++)
//         printf("%d\t",a[i][j]);
//     }
//     return 0;
// }
// sum of two matrix
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3],i,j;
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&b[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     c[i][j]=a[i][j]+b[i][j];
//     printf("The sum of matrix is \n");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++)
//         printf("%d\t",c[i][j]);
//     }

// }
// Multiply of two matrix---------------->
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3],i,j,k;
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&b[i][j]);
//     for(i=0;i<3;i++)
//     {
//     for(j=0;j<3;j++){
//         c[i][j]=0;
//         for(k=0;k<3;k++)
//         c[i][j]=c[i][j]+a[i][k]*b[k][j];
//     }
//     }
//     printf("Multiply \n");
//     for(i=0;i<3;i++){
//         printf("\n");
        
//         for(j=0;j<3;j++)
//         printf("%d\t",c[i][j]);
//     }
    
// }
// Pointer============
// #include<stdio.h>
// int main(){
//     int a,*b,**c;
//     a=10;
//     b=&a;
//     c=&b;
    
//     printf("%d\n",a);
//     printf("%u\n",b);
//     printf("%u\n",c);
//     printf("%u\n",&c);
//     printf("%u\n",*(&c));
//     printf("%u\n",*c);
//     return 0;
// }
// transpose===
// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     printf("Enter nine elements");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     printf("THe transpose of matrix\n");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++)
//         printf("%d\t",a[j][i]);
//     }
// }
// Sum of diagonal elements------
// #include<stdio.h>
// int main(){
//     int a[3][3],i,j,s=0;
//     printf("Enter nine elements\n");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     if(i==j)
//     s=s+a[i][j];
//     printf("the sum of diagonal elements=%d",s);

// }
// sum of left diagonal------
// #include<stdio.h>
// int main(){
//     int a[3][3],i,j,s=0;
//     printf("Enter nine elements\n");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     if(i+j==2)
//     s=s+a[i][j];
//     printf("the sum of diagonal elements=%d",s);

// }
// second maximum ----------
// #include<stdio.h>
// int main(){
//     int a[10],i,max,e;
//     printf("Enter elements\n");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("maximum no:");
//     max=a[0];
//     for(i=0;i<10;i++)
//     if(a[i]>=max)
//     max=a[i];
//     e=a[0];
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     if(a[i]>=e){

//     e!=max;
//     printf("%d",e);
//     }
    
// }
// close diagonal and off diagonal
// #include<stdio.h>
// int main(){
//     int i,j,a[3][3],s=0,e=0;
//     printf("Enter  elements\n");
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++){
//         if(i==j)
//         s=s+a[i][j];}
//         printf("sum of diagonal=%d",s);
//         for(i=0;i<3;i++)
//     for(j=0;j<3;j++){
//         if(i+j==2)
//         e=e+a[i][j];}
//         printf("sum of diagonal=%d",e);
// }
// Pointer--
// #include<stdio.h>
// int main(){
//     int a,*b,**c;
//     a=10;
//     b=&a;
//     c=&b;
//     // printf("%u\n",*a);
//     printf("%u\n",*b);
//     printf("%u\n",*c);
// }
// Bubble sort
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
// Linear search---------
// #include<stdio.h>
// int main(){
//     int a[10],i,s,f=0;
//     printf("Enter 10 elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("Enter the elements which you want to search:");
//     scanf("%d",&s);
//     for(i=0;i<10;i++)
//     if(a[i]==s){
//         printf("elements found=%d",i);
//         f=1;
//         break;
//     }
//     if(f==0)
//     printf("Element not found");
// }
// Binary search----
// #include<Stdio.h>
// int main(){
//     int a[10],i,j,s,l,h,m,f=0;
//     printf("Enter 10 elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("Enter the element which you want to search:");
//     scanf("%d",&s);
//     l=0;
//     h=9;
//     while(l<=h){
//         m=(l+h)/2;
//         if(a[m]==s){
//             printf("no.found:%d",m+1);
//             f=1;
//             break;
//         }
//         else if(a[m]<s)
//             l=m+1;
//         else
//             h=m-1;
//     }
//     if(f==0)
//     printf("no. not found");
//     }
// Types of pointer--
// null pointer--
// #include<stdio.h>
// int main(){
//     int*p=NULL;
//     printf("%d",*p);
// }
// swap array using pointer----------
// #include<stdio.h>
// void swap(int*,int*);
// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("After swapping values are%d%d",a,b);
// }
// void swap(int*p,int*q){
//     int e;
//     e=*p;
//     *p=*q;
//     *q=e;
// }
