// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two no=");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("a is greater");
    
//     }
//     if(a<b){
//         printf("b is greater");
    
//     }
//     if(a==b){

//         printf(" both are equal");
    
//     }
// }
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter age :");
//     scanf("%d",&a);
//     if(a>=18){
//         printf("elligible for voting");
//     }
//     else{
//         printf("not elligible for vote");

//     }
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 3 no");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b&&a>c){
//         printf("a is greatest");

//     }
//     else if(b>a&&b>c){
//         printf("b is greatest");
//     }
//     else{
//         printf("c is greatest");
//     }
// }
#include<stdio.h>
int main(){
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%4==0&&a%400==0||a%100!=0){
        printf("Leap year");
    }
    else{
        printf("not leap year");
    }
}