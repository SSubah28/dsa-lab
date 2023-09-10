#include<stdio.h>
#define size 100
int queue[size];
int front=-1, rear = -1;

void isfull()
{
    if(rear == size-1)
        printf("Queue is full!!\n");
}


int isempty()
{
    if(front==-1 || front>rear)
       return 1;
       else return 0;
}


void enq(int a)
{
    isfull();
    if(front==-1)
        front = 0;
    rear++;
    queue[rear]= a;


}

void deq(){
    if( isempty()){
        printf("Queue is empty!!\n");
    }
else{
        printf("Deleted value is %d\n",queue[front]);
        front++;
        if(front>rear)
        front=rear=-1;

}
}



void disp(){
    int i;

for(i=front;i<=rear;i++){
    printf("%d\t",queue[i]);

}

 printf("\n");



}

int main(){
    deq();
enq(5);
enq(12);
enq(15);
enq(23);
enq(34);
disp();
deq();
disp();
deq();
disp();
deq();
disp();
enq(20);
enq(25);
disp();










}
