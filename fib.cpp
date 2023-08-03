#include<iostream>
using namespace std;

    class fib{

    public :
        int a,b;
        fib( int n){ a=0;
        b=1;
        fib1(n);}
        void fib1(int n){
            int i,d,e,g;
                        cout<<a<<" "<< b<<" ";

            for(i=3;i<= n ;i++){
            d = a + b;
            a =b;
            b = d;
            cout<<d<<" ";
        }
        }


    };

int main(){
    int n;
    cin>>n;
fib f(n);

return 0;


}


