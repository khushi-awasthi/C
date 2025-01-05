// sum of n natural number
#include<stdio.h>
int sum(int);
int main(){
    int a,r;
    printf("enter the value of a");
    scanf("%d",&a);
    r=sum(a);
    printf("The sum of natural no.=%d",r);
}

int sum (int n){
    if(n>0)
        return(n+sum(n-1));
        else
        return;
    
}