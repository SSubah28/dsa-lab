#include <iostream>
using namespace std;

int max(int, int); // prototype
float max(float, float);
int main() {
    float m, n;
    do {
        cin >> m >> n;
        cout << "\tmax(" << m << ", " << n << ") = " << max(m, n) << endl;
    } while (m != 0);

    return 0;
}

int max(int x, int y) {
    return (x > y ? x : y);
}

float max(float a, float b) {
    return (a > b ? a : b);
}
