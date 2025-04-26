#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void insert_at_begin(struct node**,int);
// void insert_at_end(struct node**,int);
void display(struct node*);

int main(){
    int ch,value;
    while(1){
    printf("1.insert_at_begin\n 2.insert_at_end\n 3.display\n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter the data");
            scanf("%d",&value);
            insert_at_begin(&head,value);
            break;
        // case 2:
        //     printf("Enter the data");
        //     scanf("%d",&value);
        //     insert_at_end(&head,value);
        //     break;
        case 3:
            display(head);
            break;
        case 4:
            exit(1);
            break;
    }
}
}
void insert_at_begin(struct node** head_ref,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head_ref==NULL){
        *head_ref=new_node;
         new_node->next=*head_ref;
    }
    else{
        if((*head_ref)->next==*head_ref)//one node
        {
            (*head_ref)->next=new_node;
            new_node->next=*head_ref;
        }else{
            struct node* move=*head_ref;
            while(move->next!=*head_ref){
                move=move->next;
        }
        
        new_node->next=(*head_ref);
        move->next=new_node;
        *head_ref=new_node;
    }
    }
}
void display(struct node* r){
    while(r!=NULL){
        printf("%d->",r->data);
        r=r->next;
    }
    printf("NULL\n");

}


   
