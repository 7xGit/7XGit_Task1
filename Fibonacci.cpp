#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to generate: ";
    cin >> n;

    int a = 0, b = 1;  //Fixed initialization of Fibonacci numbers

    //Fixed Input validation
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit if n is not positive
    }
    int next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) { // Fixed semicolons and increment
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}