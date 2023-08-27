#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 20

int top = -1;
char stck[n];


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
int checkp(char a, char b)
{
    return (a=='(' && b == ')'||a=='{' && b == '}'||a=='[' && b == ']');
}

int checkbal(char b[],int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(b[i]=='('||b[i]=='{'||b[i]=='[')
            push(b[i]);

        else if(b[i]==')'||b[i]=='}'||b[i]==']')
        {

            if(top==-1) return 0;
            else if (checkp(peek(),b[i]))
            {
                pop();
                continue ;
            }
            return 0;
        }
    }
    if(top ==-1) return 1;
    return 0;

}




int main()
{
    char exp[] ="()[{}";
    int len = strlen(exp);
    checkbal(exp,len)? printf("Balanced"):printf("ImBalanced");
    return 0;


}
