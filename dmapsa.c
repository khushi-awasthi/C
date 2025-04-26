#include<stdio.h>

// int main(){
//     int n,s=0;
//     printf("enter numbers");
//     scanf("%d",&n);
//     int *p;
//     p=(int*)malloc(n*sizeof(int));
//     for(int i=0;i<n;i++){
//     printf("enter the no");
//     scanf("%d",p+i);
    
//     s=s+*(p+i);
//     }
//     printf("The sum=%d",s);
    
    
// }
#include<stdlib.h>
// int main(){
//     int n,s;
//     printf("Enter the numbers");
//     scanf("%d",&n);
//     int *p;
//     p=(int*)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Enter the no.\n");
//         scanf("%d",p+i);
//         s=*(p+i) * *(p+i);
        
//         printf(" The square %d is=%d\n",*(p+i),s);
//     }

// }
// int main(){
//     int n,max,i;
//     printf("Enter the numbers:\n");
//     scanf("%d",&n);
//     int *p;
//     p=(int*)calloc(n,sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter the no.\n");
//         scanf("%d",p+i);
//     }
//         max=*(p+i);
//         for(i=0;i<n;i++)
//         if(*(p+i)>max){
//             max=*(p+i);
//         }
//         printf("%d",max);
    
// }
// int main(){
//     int n;
//     printf("Enter the numbers:");
//     scanf("%d",&n);
//     int *p;
//     p=(int*)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Enter the numbers");
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",*(p+i));
//     }
//     realloc(p,4*(sizeof(int)));
//     for(int i=0;i<4;i++){
//         printf("Enter no\n");
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<4;i++){
//         printf("%d",*(p+i));
        
//     }
// }

// struct employee{
//     int id;
//     char name[20];

// };
// int main(){
//     struct employee *a;
//     int n;
//     printf("Enter the no.of employees");
//     scanf("%d",&n);
//     a=(int*)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Enter the id and name  ");
//         scanf("%d%s",&a[i].id,a[i].name);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d%s",a[i].id,a[i].name);
//     }
// }
struct employee{
    int id;
    char name[20];

}a[3];
int main(){
    FILE *p;
    p=fopen("psit.txt","a+");
    int i;
    for(i=0;i<=3;i++){
        printf("Enter the id, name");
        scanf("%d%s",&a[i].id,a[i].name);
    }
    for(i=0;i<=3;i++){
        printf("%d%s",&a[i].id,a[i].name);

    
    fprintf(p,"%d%s",&a[i].id,a[i].name);
    }
    fclose(p);
}