#include<stdio.h>
int main(){
int n,p,i,j,min;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d" ,&a[i]);

    for(i=0;i<n;i++){
            min=i;
            p=a[min];
            for(j=i+1;j<n;j++){


                if(a[min]>a[j]){
                    min = j;

                }

                    a[i]=a[min];
                    a[j]= p;

            }

    }

for(i=0;i<n;i++)
    printf("%d  " ,a[i]);






return 0;}


