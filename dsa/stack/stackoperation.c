//operation on stack

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct Stack{
    int top;
    int items[MAX];
}Stack;

//function to initialize the stack
void initStack(Stack *s){
    s->top = -1;
}

//function to check if the stack is full
int isFull(Stack *s){
    return s->top == MAX-1;
}

//function to check if the stack is empty
int isEmpty(Stack *s){
    return s->top == -1;
}

//function to push an element onto the stack
void push(Stack *s,int value){
    if(isFull(s)){
        printf("Stack Overflow! Cannot push %d",value);
        return;
    }
    s->items[++(s->top)] = value;
    printf("%d pushed onto the stack.",value);
}
//function to pop an element from the stack
int pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow! No element to pop.");
        return -1;
    }
    return s->items[(s->top)--];
}
//function to peek at the top element of the stack
int peek(Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty. Nothing to peek.");
        return -1;
    }
    return s->items[s->top];
}
void display(Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty. Nothing to display.");
        return;
    }
    printf("Stack elements are:");
    for(int i=0;i<=s->top;i++){
        printf("%d ",s->items[i]);
    }
    printf("\n");
}

int main(){
    Stack stack;
    initStack(&stack);

    int choice,value;

    do{
        printf("\n---Stack Operations Menu---\n");
        printf("1. Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter value to push: ");
                scanf("%d",&value);
                push(&stack,value);
                break;

            case 2:
                value = pop(&stack);
                if(value != -1)
                    printf("Popped element: %d\n",value);
                break;

            case 3:
                value = peek(&stack);
                if(value != -1)
                    printf("Top element: %d\n",value);
                break;

            case 4:
                display(&stack);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.");
        }
    }while(choice != 5);

    return 0;
}