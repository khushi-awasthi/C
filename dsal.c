#include<stdio.h>
int size=5;
int stack_arr[5];
int top=-1;
void push();
void pop();
void isEmpty();
void isFull();
void peek();
void push(){
    int data;
    top=top+1;
    printf("Enter the element");
    scanf("%d",&data);
    stack_arr[top]=data;

}
void pop(){
    int result;
    result=stack_arr[top];
    top=top-1;
    printf("%d",result);
}
void isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
void isFull(){
    if(top==(size-1))
        return 1;
    else
        return 0;
}
void peek(){
    int result;
    result=stack_arr[top];
    printf("%d",result);
}
int main(){
    int a;
    printf("Enter a number between 1 to 5");
    scanf("%d",&a);
    for(int i=0;i<=3;i++){
    switch(a){
        case 1:
            push();
            printf("Element pushed");
            printf("%d",stack_arr);
            break;
        case 2:
            pop();
            printf("Element is popped");
            break;
        case 3:
            isEmpty();
            printf("Stack is empty");
            break;
        case 4:
            isFull();
            printf("Stack is full");
            break;
        case 5:
            peek();
            printf("Peek ");
            break;
        default:
            printf("Invalid number");
    }
        
        
    }
}