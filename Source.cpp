#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}


int main() {
    cout << "Hello, World!" << endl;

    int n;
    cin >> n;
    fib(n);

    return 0;
}