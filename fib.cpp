#include <iostream>
using namespace std;

class Fibonacci {
private:
    unsigned long long int f0, f1;

public:
    Fibonacci() {
        f0 = 0;
        f1 = 1;
    }

    void display_series(int n) {
        cout << f0 << " " << f1 << " ";
        for (int i = 2; i < n; i++) {
            unsigned long long int f = f0 + f1;
            cout << f << " ";
            f0 = f1;
            f1 = f;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib;
    int num;
    cin >> num;
    fib.display_series(num);
    return 0;
}
