#include<stdio.h>
#define size 5
int queue[size];
int front=-1, rear = -1;

int isfull()
{
    if(front ==rear+1 ||(front == 0 &&rear == size-1))
        return 1;
    return 0;

}


int isempty()
{
    if(front==-1)
       return 1;
       else return 0;
}


void enq(int a)
{
    if(isfull())
       printf("Queue is full!!\n");
    else
    {
        if(front==-1){
            front = 0;
        }

    rear= (rear+1)%size;
    queue[rear]= a;

    }

}

void deq(){
    if( isempty()){
        printf("Queue is empty!!\n");
    }
else{
        printf("Deleted value is %d\n",queue[front]);
         if(front==rear)
        front=rear=-1;
        else
        front = (front+1)%size;


}
}



void disp(){
    int i;

for(i=front;i!=rear;i=(i+1)%size){
    printf("%d \t",queue[i]);

}
 printf("%d",queue[rear]);



 printf("\n");



}

int main(){
    deq();
enq(5);
enq(12);
enq(15);

enq(23);
enq(34);
enq(16);
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


