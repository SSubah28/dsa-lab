#include <Stdio.h>
#include<string.h>
#define m  100
int top ;
char s[m],ch;



void push (char ch)
{
    if(top == m-1)
    {
        printf("Stack overflow\n");

    }
    else
        s[++top] = ch;

}
void pop(){
    printf("%c",s[top--]);



}

void revw(char str[], int l){
    int i;
    for(i=0;i<l;i++)
    if(str[i] != ' '){
        push(str[i]);
    }
    else{
            while(top!=0)
        pop();
    printf(" ");
    }


while( top !=0)
    pop();


}


int main()
{
   char str[] ="DRACO MALFOY";
    int l = strlen(str);
    revw(str, l);

    return 0;

}



