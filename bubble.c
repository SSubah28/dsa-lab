#include<stdio.h>
int main(){
int n,p,i,j,o;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d" ,&a[i]);

    for(i=0;i<n;i++){
            o=0;
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    p=a[j];
                    a[j]=a[j+1];
                    a[j+1]=p;
                    o++;


                }
                if

            }

    }

for(i=0;i<n;i++)
    printf("%d  " ,a[i]);






return 0;}

