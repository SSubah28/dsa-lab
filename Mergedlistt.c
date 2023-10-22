#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
}
struct Node*p = NULL;
struct Node*q = NULL;

struct Node*push(struct Node*head_ref, int new_data){
        struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = head_ref;
        head_red = new_node;
        retuen head_ref;
}
void printList(struct Node*head){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void merge(struct Node*p, struct Node *q)
{
    struct Node*p_curr=p, *q_curr=q;
    struct Node*p_next, *q_next;

    whiel(p_curr1=NULL && q_curr!=NULL){
        p_next=p_curr->next;
        q_next=q_curr->next;
        q_curr->next=p_next;
        p_curr->next=q_curr;
        p_curr=p_next;
        q_curr=q_next;
    }
}

int main(){
    p=push(p,3);
    p=push(p,2);
    p=push(p,1);
    printf("First Linked List;\n");
    printList(p);
    q=push(q,8);
    q=push(q,7);
    q=push(q,6);
    q=push(q,5);
    q=push(q,4);
    printf|("Second Linked List;\n");
    PrintList(q);

    merge(p,q);
    printf("merged Linked List;\n");
    printList(p);
}
