// WAP   to find the length of string without uding string function
// #include<stdio.h>
// int main(){
//     char a[20];
//     printf("enter string");
//     gets(a);
//     int i=0;
//     while(a[i]!=NULL){
//     printf("%c ",a[i]);
//     i=i+1;
//     }
// }
// #include<stdio.h>
// int main(){
//     char a[30];
//     printf("enter the string:");
//     fgets(a,sizeof(a),stdin);
//     int i=0,j;
//     while(a[i]!=NULL){
//         i=i+1;
//     }
//     int length=i;
//    for(j=length;j>=0;j--){
//         printf("%c",a[j]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     char a[50];
//     printf("Enter the string");
//     fgets(a, sizeof(a), stdin);
//     int i = 0, c = 0;
//     while (a[i] != NULL)
//     {
//         if (a[i] == ' ' && a[i + 1] != ' ')
//             c = c + 1;
//         i++;
//     }
//     printf("total words=%d", c + 1);
// }
#include<stdio.h>
int main(){
    char a[50],b[50];
    printf("Enter the string:");
    fgets(a,sizeof(a),stdin);
    printf("Enter the string:");
    fgets(b,sizeof(b),stdin);
    int i=0;
   
    while(a[i]!=NULL && b[i]!=NULL){
         i++;
        if(a[i]==b[i])
        
         printf("same");
         else
         printf("not same");
}
return 0;
}