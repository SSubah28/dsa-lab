#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 20


int top = -1;
char stck[n];
int i,j;


int isempty()
{
    return top ==-1;
}

int isfull()
{
    return   top == n-1;
}

char peek()
{
    return stck[top];
}

char push(char b)
{
    if(top == n-1)
        printf("Stack is full\n");
    else
    {
        top++;
        stck[top] = b;
    }
}

char pop()
{
    if(top ==-1)
        printf("Stack is Empty\n");
    else
    {
        char d = stck[top];
        top--;
        return d;

    }
}
int checkop(char a)
{ if(a)
    return (a>='a' && a<='z' )||(a>='A' && a<='Z') ||(a>='1' && a<='9') ;
}

int precedece(char a){

switch(a){
case'+':
case'-':
    return 1;
case'*':
case'/':
    return 2;
case'^':
    return 3;
    }
    return -1;
}

int change(char* str){
 for(i=0,j=-1;str[i];i++){
        if(checkop(str[i]))
        str[++j]=str[i];
 else if (str[i]=='(')
            push(str[i]);
            else if (str[i]==')')
        while(!isempty()&&peek!='(')
        {
            str[++j]=pop();
        }
        if(!isempty()&&peek()!='(')
            return -1;
         pop();
        else{
            while(!isempty()&&precedence(str[i]<=precedence(peek()))
                  str[++j]=pop();
                  push(str[i]);

                  }
                  while(!isempty())
                    str[++j]=pop();
            str[++j]='\0';
            printf("%s",&str);];
            return 0;
 }






 }













int main()
{
   char str[n];
   scqanf("%s", &str);
   change(str);
    return 0;


}
