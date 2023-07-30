#include<stdio.h>
#include <stdlib.h>
struct node{
int value;
struct node *next;};

struct node *head;

void link(struct node *p){
while(p!=NULL){
    printf("%d\t",p->value);
    p = p->next;

}
printf("\n");
}
//insert 1st
void ins1(int n, int a){
struct node *new1 = (struct node *)malloc(sizeof(struct node));
 new1->value= a;

if(n==1){
    new1-> next = head;

    head = new1;
return;

}


else{
struct node *prv;
prv = head;
    for(int i=0;i<n-2;i++){
    prv = prv->next;

}
new1->next=prv->next;
  prv->next= new1;



}
}
void del(int s){
struct node *temp =head;
if(s==1){
    head = temp->next;
    free(temp);
    return;
}
else{
    for(int i=0; i<s-2;i++)
        temp =temp->next;
    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}}
void end1(int c);
int main()
{


        ins1(1,5);

        ins1(1,6);

        ins1(1,7);

        ins1(1,8);
        ins1(2,4);
      link(head);

end1(9);


link(head);
del(5);
link(head);



return 0;
}
void end1(int c){
    struct node *new2 = (struct node *)malloc(sizeof(struct node));
    struct node *prv;
 prv = head;
     while(prv->next!=NULL){
    prv = prv->next;

}

    new2->value= c;
    new2->next = NULL;
    prv->next =new2;
}







