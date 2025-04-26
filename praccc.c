#include<stdio.h>
// int prime(int);
// int main(){

//     int n,n2,i;
//     printf("Enter a number");
//     scanf("%d",&n);
//     printf("enter max range");
//     scanf("%d",&n2);
//     for(i=n;i<=n2;i++){
//    if(prime(i))
//    printf("%d\t",i);
//     }

// }
// int prime(n){
//     int i;
//     if(n<2)
//     return 0;
//     else if(n==2)
//     return 1;
//     else if(n%2==0)
//     return 0;
//     for(i=3;i<n/2;i++){
//         if(n%i==0)
//         return 0;
//     }
//     return 1;
// }

// int arm(n);
// int main(){
//     int a,b,i;
//     printf("Enter a number");
//     scanf("%d",&a);
//     printf("enter max range");
//     scanf("%d",&b) ;
//     for(i=a;i<=b;i++){
//     if(arm(i))
//     printf("%d\n",i);
    
//     }
   
// }
// int arm(n){
//     int b,s=0;
//     int t=n;
   
//     b=n%10;
//     s=s+(b*b*b);
//     n=n/10;
// }
// if(s==t){
//     return 1;
// }
// else    
//     return 0;
// }
int nat(n);
int main(){
    int n,b;
    printf("Enter the number");
    scanf("%d",&n);
    b=nat(n);
    printf("%d",b);
    

}
int nat(n){
    int i,s=0;
    for(i=0;i<=n;i++)
    s=s+i;
    return s;
}