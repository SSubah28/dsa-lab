#include<stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;

};
struct node* tail;

//print function
void link1()
{   struct node *p = tail->next;
    do{
        printf("%d\t",p->value);
        p = p->next;}
    while(p!=tail->next);
    printf("\n");
}
//empty list
void empty(int a){

if (tail==NULL){
        struct node *nwe = (struct node *)malloc(sizeof(struct node));
        nwe->value = a;
        nwe->next = nwe;
        tail = nwe;


}
}
//insert 1st
void ins1(int a)
{  struct node *nwe1 = (struct node *)malloc(sizeof(struct node));
 nwe1->value = a;
 nwe1->next =tail->next;
 tail->next =nwe1;

}
//insert at
void ins2(int n,int a){

    if(n==1){
        ins1(a);}
    else{
            struct node *nwe3 = (struct node *)malloc(sizeof(struct node));
 nwe3->value = a;

    int i;
    struct node *eita;
    eita = tail->next;

        for(i=0;i<n-2;i++){
            eita =eita->next;
        }
        if(eita==tail) ins3(a);

         else{ nwe3->next =eita->next;
         eita->next = nwe3;

         }

    }

}

//insert end
void ins3(int a){
      struct node *nwe2 = (struct node *)malloc(sizeof(struct node));
      nwe2->value =a;
       int i;
    struct node *one;
     one = tail->next;

            nwe2->next = one;
            tail->next = nwe2;
            tail = nwe2 ;


}
//delete 1
void del1(int n){
    int i;
      struct node *eita;
         eita = tail->next;
         tail->next = eita ->next;
free(eita);
}


//delete pos
void del2(int n){
    int i;
      struct node *eita;
         struct node *porerta;
         eita = tail->next;


            for(i=0;i<n-2;i++){
            eita =eita->next;}
            porerta =eita->next;
       eita->next= porerta->next;


        if(porerta==tail){
            tail =eita;
         }

    free(porerta);

    }

//count
void cnt(){
    int i=0;
      struct node *one;
      one =tail->next;
       while(one!=tail)
    {   one= one->next;
        i++;
    }
    i++;

if(tail==NULL)
    printf("count 0");
    else    printf("count %d",i);
}






int main(){
 empty(5);
 link1();
 ins1(7);
 link1();
 ins2(1,8);
 link1();

 ins3(11);
 link1();
 printf("delete at 1\n");
 del1(1);
  link1();
  printf("delete at \n");
   del2(2);
  link1();
cnt();




return 0;
}






