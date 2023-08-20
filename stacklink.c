#include<stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node* top = NULL;

void disp(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p = p->next;

    }
}
//push
void push(int a)
{
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    isfull(a);
    new1->value= a;
    if(top==NULL)
    {
        new1->next = NULL  ;
        top = new1;
    }
    else
    {
        new1->next = top  ;
        top = new1;
    }
}



void isfull(int p)
{
    if(!p)
        printf(" Memory is full\n");
    return 0;

}

void isempty()
{
    if(top == NULL)
        printf("Stack is Empty\n");

}


void pop()
{

    struct node *bad = top;
    if(top==NULL)
    {
        printf("Stack is Empty\n");

    }
    else
    {
        ;
        top = top->next;
           printf("\nDeleted %d\n",bad->value);
        free(bad);


    }
}

void peek()
{
    printf("\nTop element is %d\n",top->value);
}





int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    disp(top);
    peek();
    pop();
    disp(top);
    peek();
    pop();
    disp(top);
    peek();
    disp(top);
    pop();
    pop();
    pop();

    isempty();

    return 0;

}




