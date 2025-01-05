// #include<stdio.h>
// int main(){
//     char a[]="Hello";
//     int i=0;
//     while(a[i]!=NULL){
//         printf("%c",a[i]);
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char a[]="Hello";
//     printf("%s",a);
// }
// #include<stdio.h>
// int main(){
//     char a[]="Hello";
//     char *p;
//     p=a;
//     while(*p!=NULL)
//     printf("%c",*p++);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char a[20];
//     printf("Enter the string");
//     scanf("%s",a);
//     printf("string is=%s",a);
// }
// int main(){
//     char a[20];
//     printf("Enter a string");
//     gets(a);
//     printf("string is %s",a);
// }
// int main(){
//     char a[]="Hello";
//     printf("%s",a+1);
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[]="Hello";
//     printf("%d",strlen(a));
// }
// int main(){
//     char a[]="Hello";
//     printf("%s",strrev(a));
// }
// int main(){
//     char a[]="Hello",b[10];
//     strcpy(b,a);
//     printf("%s",b);

// }
// int main(){
//     char a[]="Hello",b[10]="Kanpur";
//     strcat(a,b);
//     printf("%s",a);
// }
// int main(){
//     char a[]="Kanpur",b[10]="Hello";
//     if(strcmp(a,b)==0)
//     printf("string is same");
//     else
//     printf("string is not same");
// }
// int main(){
//     char a[]="Kanpur";
//     printf("%s",strupr(a));
// }
// int main(){
//     char a[]="HELLO";
//     printf("%s",strlwr(a));
// }
#include<stdio.h>
// int main(){
//     char a[20];
//     printf("Enter a string");
//     gets(a);
//     int i=0;
//     while(a[i]!=NULL)
//     i=i+1;
//     printf("no of char=%d",i);
// }
// int main(){
//     char a[20];
//     printf("Enter a string");
//     gets(a);
//     int i=0;
//     while(a[i]!=NULL){
//         if(a[i]>=65 && a[i]<=90 &&a[i]!=' ')
//         a[i]=a[i]+32;
//         i++;
//     }
//     printf("The string in upper case=%s",a);
// }
// int main(){
//     char a[20];
//     int c=0;
//     printf("Enter a string");
//     gets(a);
//     int i=0;
//     while(a[i]!=NULL)
//     {
//         if(a[i]==' '&& a[i+1]!=' ')
//         c=c+1;
//         i++;
//     }
//         printf("Total words=%d",c+1);
    
// int main(){
//     char a[20];
//     printf("Enter the string");
//     gets(a);
//     int i,j,f=0;
//     i=0;
//     while(a[i]!=NULL)
//         i++;
//         i=i-1;
//         j=0;
//     while(a[j]!=NULL){
//         if(a[i]!=a[j]){
//             f=1;
//             break;
//         }
//             i--;
//             j++;

//     }
//     if(f==0)
//         printf("Palindrome");
//     else
//         printf("Not palindrome");

// }
// int main(){
//     char a[20];
//     int i,j,r;
//     printf("Enter a string");
//     gets(a);
//     i=0;
//     while(a[i]!=NULL)
//     i++;
//     r=i-1;
//     for(i=0;i<r;i++)
//     for(j=0;j<r-i-1;j++)
//     if(a[j]>a[j+1]){
//         char t;
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }
//     printf("string is sorted=%s",a);
// }
#include<string.h>
int main(){
    char a[5][10];
    int i,j;
    printf("Enter five string");
    for(i=0;i<5;i++)
    gets(a[i]);
    for(i=0;i<5;i++)
    for(j=0;j<5-i-1;j++)
    if(strcmp(a[j],a[j+1])>0){
        char b[10];
        strcpy (b,a[j]);
        strcpy(a[j],a[j+1]);
        strcpy(a[j+1],b);
    }
    printf("The sorted string is\n");
    for(i=0;i<5;i++)
    printf("\n%s",a[i]);
}