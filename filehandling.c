#include<stdio.h>
// int main()
// {
//     FILE *p;
//     p=fopen("abc.txt","r+");
//     char c;
//     while((c=getc(p))!=EOF)
//     printf("%c",c);
//     fclose(p);
// }
// int main(){
//     FILE *p,*r;
//     p=fopen("abc.txt","r+");
//     r=fopen("PSIT","w+");
//     char c;
//     while((c=getc(p))!=EOF)
//     putc(c,r);
//     fclose(p);
//     fclose(r);
// }
int main(){
    FILE *p;
    p=fopen("abc.txt","r+");
    int a, e=0,o=0;
    while((fscanf(p,"%d",&a))!=EOF)
    if(a%2==0)
    e=e+1;
    else
    o=o+1;
    printf("Total even =%d\n",e);
    printf("Total odd =%d\n",o);
    fclose(p);
}