#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *new_node, *temp;
void create(&head,int);
void display();
int main()
{
    int choice;
    do
    {
        printf("\n-----------------------linked list menu------------------------");
        printf("\n1.create\n2.display\n3.insert at first\n4.insert at specific position\n5.insert at last\n6.delete at first\n7.delete at specific position\n8.delete at last\n9.exit\n");
        printf("------------------------------------------------------------\n");
        printf("\nEnter your choice");
        scanf("%d\n", &choice);
        printf("\n----------------------------------------------------------\n");

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        default:
            printf("invalid choice");
        }

    } while (choice != 9);
}
void create()
{
    int n;
    char ch[4];
    printf("\n enter thr first element");
    scanf("%d", &n);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = n;
    head->next = NULL;
    temp = head;
    printf("\ndo you want to continue,answer in y and n");
    printf("%c", &ch);
    while (ch == "y" || ch == "Y")
    {
        printf("\nenter thr next element");
        scanf("%d", &n);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = n;
        new_node->next = NULL;
        temp->next = new_node;
        temp = temp->next;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("list id empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }

    }
}