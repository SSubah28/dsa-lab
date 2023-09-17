#include<stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node* f = NULL;
struct node* r = NULL;

void disp(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p = p->next;

    }
     printf("\n");

}



void enq(int a)
{
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    new1 -> value = a;
    new1 -> next = NULL;

    if(f==NULL&& r==NULL)
    {
        f = new1;
        r = new1;

    }
    else
    {
        r->next = new1;
        r = new1;
    }

}
void deq()

{
    struct node* t;
    if(f==NULL)
        printf("Queue is empty\n");
    else
    {
        t = f;
        f = f->next;
        if(f==NULL)
            r = NULL;
        free(t);
    }


}





int main()
{
    enq(5);
    enq(6);
    enq(7);
    enq(8);
    enq(9);
    disp(f);

    deq();
    disp(f);

    deq();
    disp(f);
    deq();
    deq();
    disp(f);
    deq();
    deq();
    deq();








    return 0;

}




