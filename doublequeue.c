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
void enqf(int a)
{
    if(isfull())
    printf("Queue is full!!\n");
    else if(front==-1&&rear ==-1)
    {
        front = rear = 0;
        queue[front]= a;
    }
    else if(front==0)
    {
        front = size -1;
        queue[front]= a;
    }
    else
    {
        front--;
        queue[front]= a;
    }
}
void enqr(int a)
{
    if(isfull())
    printf("Queue is full!!\n");
    else if(front==-1&&rear ==-1)
    {
        front = rear = 0;
        queue[rear]= a;
    }
    else
    {
        rear++;
        queue[rear]= a;
    }
}
void deqf()
{
    if( isempty())
    {
        printf("Queue is empty!!\n");
    }
    else if(front==rear)
    {
        printf("Deleted value is %d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Deleted value is %d\n",queue[front]);
        front = (front+1)%size;
    }
}
void deqr()
{
    if( isempty())
    {
        printf("Queue is empty!!\n");
    }
    else if(front==rear)
    {
        printf("Deleted value is %d\n",queue[rear]);
        front=rear=-1;
    }
    else
    {
        printf("Deleted value is %d\n",queue[rear]);
        rear = (rear-1)%size;
    }
}
void disp()
{
    int i;
    for(i=front; i!=rear; i=(i+1)%size)
    {
        printf("%d \t",queue[i]);
    }
    printf("%d",queue[rear]);
    printf("\n");
}
void getf()
{
    printf("Front is %d\n",queue[front]);
}

void getr()
{
    printf("Rear is %d\n",queue[rear]);
}

int main()
{
    deqr();
    deqf();
    enqr(5);
    enqr(12);
    enqr(15);
    disp();
    enqf(23);
    enqf(34);
    enqf(16);
    disp();
    deqr();
    disp();
    deqf();
    disp();
    deqr();
    disp();
    enqf(16);
    disp();
    getf();
    getr();

    return 0;
}
