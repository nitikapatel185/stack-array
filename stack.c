#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
void push_element();
void pop_element();
void display_top();
void display_stack();
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enter the item to be inserted:\n");
        printf("2. Enter item to be popped:\n");
        printf("3.Display the top element in stack:\n");
        printf("4.Display all the stack elements:\n");
        printf("5.exit\n"); 
        printf("enter the choice you want to enter:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push_element();
            break;
            case 2: pop_element();
            break;
            case 3: display_top();
            break;
            case 4: display_stack();
            break;
            case 5:exit(0);
            default:("Wriong choice\n");
            break;
        }
    }
}
void push_element()
{
    int value,c;
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    printf("Enter the value you want to insert:\n");
    scanf("%d",&value);
    
    temp->data=value;
    temp->next=top;
    top=temp;
}
void pop_element()
{
    struct stack *temp;
    temp=(struct stack *)malloc(sizeof(struct stack));
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp=top;
        printf("value to be popped %d",temp->data);
        top=top->next;
        free(top);
    }
}
void display_top()
{
   if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top of the stack is %d",top->data);
    }
}
void display_stack()
{
   struct stack  *temp;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}