#include<stdio.h>
int square(int);
int main(){
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    b=a*a;
    printf("The square is=%d",b);
}
int square(int c){
    int d;
    d=c*c;
    return(d);
}