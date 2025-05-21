#include<stdio.h>
int main(){
    int a[10],i,max,e;
    printf("Enter elements\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("maximum no:");
    max=a[0];
    for(i=0;i<10;i++)
    if(a[i]>=max)
    max=a[i];
    e=a[0];
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    if(a[i]>=e){

    e!=max;
    printf("%d",e);
    }
    
}