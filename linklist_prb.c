#include<stdio.h>
#include <stdlib.h>
struct node
{
int value;
struct node *next;

};

struct node* p = NULL;
struct node* q = NULL;

void link(struct node *p1){
    struct node *p =p1;
while(p!=NULL){
    printf("%d\t",p->value);
    p = p->next;

}
  printf("\n");
    printf("\n");
}

struct node *ins1(struct node *head,  int a){

struct node *new1 = (struct node *)malloc(sizeof(struct node));

new1->value= a;
new1-> next = head;
head = new1;

return head;

}


void merge(struct node *p ,struct node * q){

struct node* pcur = p;
struct node* qcur =q;
struct node* pnext;
struct node* qnext;
while(pcur != NULL && qcur!=NULL){
        pnext = pcur ->next;
  qnext = qcur ->next;

  qcur->next = pnext;
  pcur->next =qcur;
  pcur = pnext;
  qcur = qnext;

}
}



int main(){
    p = ins1(p,3);
     p = ins1(p,2);
      p = ins1(p,1);
       q = ins1(q,6);
        q= ins1(q,5);
         q = ins1(q,4);


link(p);
link(q);
merge(p,q);
link(p);

return 0;


}

