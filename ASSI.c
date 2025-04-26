#include<stdio.h>
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         printf("\n");
//         for(j=0;j<i;j++){
//             printf("*\t");
//         }
//     }
//     return 0;
// }
// int main(){
//     int t1=0,t2=1,NT=0;
//     while(NT<=100){
//         printf("%d ",t1);
//         int t;
//         NT=t1+t2;
//         t1=t2;
//         t2=NT;

        
//     }
// }
// int main(){
//     int a[10],i,j,f=0;
//     printf("enter elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
    
//     for(i=0;i<10;i++){
//     for(j=0;j<=10-i-1;j++)
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
int main(){
    int a[10],i,j,f=0;
    printf("enter elements");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<10;i++){
    
    if(a[i]>a[i+1]){
        int t;
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
       
    }
    
    }
    printf("the sorted array:");
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
}