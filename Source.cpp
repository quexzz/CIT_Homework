#include <iostream>

using namespace std;

void fib(int n) {
    int first_num = 0, second_num = 1;
    cout << first_num << endl;
    cout << second_num << endl;

    for (int i = 2; i < n; ++i) {
        int next_num = first_num + second_num;
        cout << next_num << endl;
        first_num = second_num;
        second_num = next_num;
    }
}

int main() {
    cout << "Hello, World!" << endl;

    int n;
    cin >> n;
    fib(n);

    return 0;
}