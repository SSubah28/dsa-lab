#include<stdio.h>
#include <stdlib.h>
struct node{
int value;
struct node *next;};
struct node* head;
void link(struct node *p){
while(p!=NULL){
    printf("%d\n",p->value);
    p = p->next;

}
}
//insert 1st
void ins1(int n, int a){
struct node *new1 = (struct node *)malloc(sizeof(struct node))
new1->value= a;
while(n==1){
    new1-> next = head->next;
    head->value = new1->value;
while(p!=NULL){
    printf("%d\n",p->value);
    p = p->next;

}
}



}

int main()
{
    struct node *head;

    struct node *one=NULL;
      struct node *two=NULL;
        struct node *three=NULL;

        one = (struct node*)malloc(sizeof(struct node));
          two = (struct node*)malloc(sizeof(struct node));
            three = (struct node*)malloc(sizeof(struct node));
        one->value =10;
        two->value = 13;
        three->value = 15;
        one->next = two;
        two->next =three;
        three->next =NULL;
        head = one;
        link(head);

}






