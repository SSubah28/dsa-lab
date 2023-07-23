#include<stdio.h>
int uwu(int arr[]){
    int a,i=0,j=8;

 while(i<j){
 a = arr[i];
 arr[i] = arr[j];
 arr[j]= a;
 i++;
 j--;}

 for(i=0;i<9;i++)
 printf("%d\t",arr[i]);



}

int main(){
 int arr [100];
 int a,b,c,d,e,i,j,k;

 for(i=0;i<9;i++)
 scanf("%d",&arr[i]);


uwu( arr);






return 0;}


