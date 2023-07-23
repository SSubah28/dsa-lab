#include<stdio.h>
int lie (int arr[],int a, int ab[])
{

    int i;
    for(i=0; i<9; i++)
    {


        if (arr[i] == a)
            ab[i] = i+1;


    }
    for(i=0; i<9; i++)
    if(ab[i]!=0)
        printf("The positions %d\n",ab[i]);
}
int main()
{
    int arr [100],ab[10] = {0};
    int a,b,c,d,e,i,j,k;
    for(i=0; i<9; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&a);
    lie ( arr, a,ab);

    return 0;
}

