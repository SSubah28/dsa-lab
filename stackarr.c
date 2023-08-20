#include<stdio.h>
int arr[100];
int top = -1;
int n = 100;

void push(int a){
    if(top == n-1)
        printf("Stack is full\n");
    else{
        top++;
        arr[top] = a;
    }


}
void pop(){
    if(top ==-1)
        printf("Stack is Empty\n");
    else{
        top--;

    }


}
void peek(){
   printf("Top element is %d\n",arr[top]);
}
void disp(){
    int i;
    printf("Elements are-\n");

    for(i=top;i>=0;i--){
        printf("%d\t",arr[i]);

    }
        printf("\n");
    }
    void isfull(){
    if(top == n-1)
         printf("Stack is full\n");

    }


void isempty(){
    if(top ==-1)
        printf("Stack is Empty\n");

    }




int main()
{
push(5);
push(6);
push(7);
push(8);
push(9);
disp();
peek();
pop();
peek();
pop();
peek();
disp();
isfull();
isempty();

return 0;

}







