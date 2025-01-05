#include<stdio.h>
#include<stdlib.h>
// int main(){
//     int n,s=0;
//     printf("enter the elements");
//     scanf("%d",&n);
//     int *p;
//     p=(int*)malloc(n*(sizeof(int)));
//     for(int i=0;i<n;i++){
//     printf("rnter the no");
//     scanf("%d",p+i);
//     s=s+*(p+i);

// }
// printf("The sum is =%d",s);
// }
// int main(){
//     int n,i,s=0;
//     printf("Enter the elements");
//     scanf("%d",&n);
//     int*a;
//     a=(int*)calloc(n,sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter a no.");
//         scanf("%d",a+i);
//         s=s+*(a+i);
//     }
//     printf("The sum is=%d",s);
// }
// int main(){
//     int*p;
//     p=(int*)malloc(sizeof(int));
//     realloc(p,5*sizeof(int));
//     p[1]=10;
//     p[2]=20;
//     p[3]=30;
//     p[4]=40;
//     printf("Third element =%d",p[3]);
// }
int main(){
    int*p;
    p=(int*)malloc(sizeof(int));
    free(p);
    if(p==NULL)
    printf("Memory deleted");

}