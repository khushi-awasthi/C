// #include<stdio.h>
// int main(){
//     int a[10],i,size;
//     printf("Enter the size of array");
//     scanf("%d",&size);
//     printf("Enter elements");
//     for(i=0;i<size;i++)
//     scanf("%d\n",&a[i]);
//     printf("displayig array:\n");
//     for(i=0;i<size;i++)
//     printf("%d\t",a[i]);
//     printf("reverse of element");
//     for(i=size;i>0;i--)
//     printf("%d\t",a[i]);
    //    printf("\n\n");
// }
// #include<stdio.h>
// int main(){
//     int a[10],i,size,b[10];
//     printf("Enter the size of array");
//     scanf("%d",&size);
//     printf("Enter elements");
//     for(i=0;i<size;i++)
//     scanf("%d\n",&a[i]);
//     printf("displayig array:\n");
//     for(i=0;i<size;i++)
//     printf("%d\t",a[i]);
//     printf("Copied array");

//     for(i=0;i<size;i++){
//     b[i]=a[i];
//     printf("%d\t",b[i]);
//     }
    
// }
// #include<stdio.h>
// int main(){
//     int a[10],i,size,f=0,j;
//     printf("Enter the size of array");
//     scanf("%d",&size);
//     printf("Enter elements");
//     for(i=0;i<size;i++)
//     scanf("%d\n",&a[i]);
//     printf("displayig array:\n");
//     for(i=0;i<size;i++)
//     printf("%d\t",a[i]);
//     printf("check duplicate value");
//     for(i=0;i<size;i++){
//         for(j=i+1;j<size;j++){
//             if(a[i]=a[j]){
//                 f++;
//                 break;
//             }
//         }
//     }
    
//     printf("dublicate value:%d\n",f);
// }

// #include<stdio.h>
// int main(){
//     int a[20],s,i,max,min;
//     printf("Enter the size of array");
//     scanf("%d",&s);
//     printf("Enter the elements");
//     for(i=0;i<s;i++)
//     scanf("%d",&a[i]);
    
//     max=a[0];
//     for(i=0;i<s;i++)
//     if(a[i]>=max)
//     max=a[i];
//     printf(" maximum number%d\n",max);

//     min=a[0];
//     for(i=0;i<s;i++)
//     if(a[i]<=min)
//     min=a[i];
//     printf(" minimum number%d\n",min);


// }
// even and odd number 
#include<stdio.h>
int main(){
    int a[20],b[20],c[20],s;
    int i,j=0,k=0;
    printf("Enter the size of array:");
    scanf("%d",&s);
    printf("Enter the elements");
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    for(i=0;i<s;i++){
    if(a[i]%2==0){
        
        b[j]=a[i];
        j++;
        
    }
    else{
        c[k]=a[i];
        k++;
    }
    }
    printf("even\n");
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }
    printf("odd\n");
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
}