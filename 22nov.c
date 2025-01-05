// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter a number ");
//     scanf("%d",&i);
//     a:
//     if(i%2==0){
//         printf("Even");
    
//     }
//     else{
//         printf("odd");
//         }
//     goto a;
    
//   }

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("1.Add\n 2.sub\n 3.mul\n 4.div");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            d=a+b;
            break;
        case 2:
            d=a-b;
            break;
        case 3:
            d=a*b;
            break;
        case 4:
            d=a/b;
            break;
        default:
            printf("wrong choice");
    }
        printf("%d",d);
    
return 0;
}

// 1
// 22
// 333
// 4444
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         printf("\n");
//         for(j=1;j<=i;j++)
//         printf("%d",i);
//     }
//         return 0;
    
// }
// 4444
// 333
// 22
// 1
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=4;i>=0;i--)
//     {
//         for(j)
//     }
// }