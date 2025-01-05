#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *address;
}*p;
// p=NULL;
void create(void)     
{
    struct node *q,*r;
    q=p;
    int *d;
    printf("Enter the data");
    scanf("%d",&d);
    if(p==NULL)
    {
        p=malloc(sizeof(struct node));
        p->data=d;
        p->address=NULL;

    }
    else{
        while(q->address!=NULL)
        q=q->address;
        r=malloc(sizeof(struct node));
        q->address=r;
        r->data=d;
        r->address=NULL;
    }
}
void display(void){
    struct node *q;
    q=p;
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->address;
    }
}
int main(){
    p=NULL;
    create();
    create();
    create();
    display();

}

