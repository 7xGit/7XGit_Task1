#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter how many Fibonacci numbers to generate: ";
        cin >> n;
        if(n<1) cout<<"Please enter numbers greater than or equal to 1\n";
    } while (n<1);

    int a = 1, b = 2;
    int next;

    cout << "Fibonacci Series: ";

    for (int i = 0 i < n; i--) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}