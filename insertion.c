#include<stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
    struct node *prv;
};
struct node* head;
//print function
void link(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p = p->next;
    }
}
//allocating memeory
struct node * getnew(int a)
{
    struct node *nwe = (struct node *)malloc(sizeof(struct node));
    nwe->value= a;
    nwe->next = NULL;
    nwe->prv = NULL;
    return nwe;
};
//insert 1st
void ins1(int a)
{
    struct node *nwe1 = getnew(a);
    if(head==NULL)
        head = nwe1;
    else
    {
        nwe1->next =head;
        head->prv =nwe1;
        head =nwe1;
    }
}
//insert at
void ins2(int n,int a){
     struct node *nwe1 = getnew(a);

    int i;
    struct node *eita;
    eita = head;
    if(n==1)
        ins1(a);
    else{
        for(i=0;i<n-2;i++){
            eita =eita->next;
        }
         nwe1->next= eita->next;
        nwe1->prv = eita;
        eita->next->prv = nwe1;
        eita->next =nwe1;

    }

}
//insert end
void ins3(int a){
      struct node *nwe1 = getnew(a);
       int i;
    struct node *eita;
     eita = head;
     for(i=0;eita->next!=NULL;i++){
            eita =eita->next;
            }
            eita->next =nwe1;
            nwe1->prv = eita;
            nwe1->next = NULL;


}
//delete 1
void del1(int n){
    int i;
      struct node *eita;
         eita = head;

    if(n==1){


     head =  eita->next;
     head->prv = NULL;
     free(eita);

    }
    else {
            for(i=0;i<n-1;i++){
            eita =eita->next;
        }

        eita->next->prv = eita->prv;
        eita->prv->next = eita->next;
    free(eita);

    }


    }

//delete end
void del2(){
    int i;
    struct node *eita;
     eita = head;
     for(i = 0;eita->next!=NULL;i++){
     eita =  eita->next;
     }
  eita->prv->next =NULL;
  free(eita);

}

int main()
{ int n,a,b,c,d,e,f,g;

    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one = getnew(10);
    two = getnew(13);
    three = getnew(16);
    one->next = two;
    two->next =three;
    three->next =NULL;
    one->next = two;
    two->next =three;
    three->next =NULL;
    one->prv = NULL;
    two->prv =one;
    three->prv =two;
    head = one;
    ins1(7);
    link(head);
    printf("\n");
    ins2(2,8);
    link(head);
    printf("\n");
    ins3(12);
    link(head);
      printf("\n");
      printf("Deleting position ");
      scanf("%d",&n);
    del1(n);
    link(head);
    printf("\n");
    del2();
    link(head);

    return 0;
}






