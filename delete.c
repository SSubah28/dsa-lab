#include<stdio.h>
int delete1(int arr[],int a){

 for(int i=2;i<8;i++)
 arr[i] = arr[i+1];

  //arr[5] = a;



}

int main(){
 int arr [100];
 int a,b,c,d,e,i,j,k;

 for(i=0;i<9;i++)
 scanf("%d",&arr[i]);

 //scanf("%d",&a);
delete1( arr, a);



 for(i=0;i<8;i++)
 printf("%d\t",arr[i]);




















return 0;}

