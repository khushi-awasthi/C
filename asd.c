#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],size,i;
    
    printf("Enter the size of array:");
    scanf("%d,&size");
    printf("Enter elements of array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    printf("Elements in array");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    getch();
}