#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to generate: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive integer.\n";
        return 1;
    }

    int a = 0, b = 1;
    int next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}