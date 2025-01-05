// #include<stdio.h>
// union abc{
//     int a;
//     int b;
//     int c;
// }r;
// int main(){
//     r.a=30;
//     printf("a=%d ",r.a);
//     r.b=50;
//     printf("b=%d ",r.b);
//     r.c=90;
//     printf("c=%d ",r.c);
// }
// #include<stdio.h>
// enum week{sun, mon, tue,wed,thu,fri,sat};
// int main(){
//     enum week r;
//     r=tue;
//     printf("%d",r);
// }
#include <stdio.h>
int main()
{
    auto int a = 10;
    {
        int a = 30;
    }
    printf("%d", a);
}