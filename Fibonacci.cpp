#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to generate: ";
    cin >> n;

    int a = 1, b = 2;
    int next;

    cout << "Fibonacci Series: ";

    for (int i = 0 ; i < n ; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}