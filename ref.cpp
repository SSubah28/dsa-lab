#include <iostream>
using namespace std;

void func(int, int&);

int main() {
    int a = 22, b = 44;
    cout << "a = " << a << ", b = " << b << endl;
    func(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    func(2*a + 2, b);
    cout << "a = " << a << ", b = " << b << endl;
}

void func(int x, int &y) {
    x = 89;
    y = 13;
}
