#include<stdio.h>
int insert(int arr[],int a){

 for(int i=9;i>5;i--)
 arr[i] = arr[i-1];

  arr[5] = a;



}

int main(){
 int arr [100];
 int a,b,c,d,e,i,j,k;

 for(i=0;i<9;i++)
 scanf("%d",&arr[i]);

 scanf("%d",&a);
insert( arr, a);



 for(i=0;i<10;i++)
 printf("%d\t",arr[i]);




















return 0;}
