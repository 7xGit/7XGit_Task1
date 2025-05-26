#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to generate: ";
    
    while(true) {
        try {
            cin>>n;
            if(n <= 0) throw n;
            break;
        } catch(int) {
            cout << "Enter a valid natural number.";
        }
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
    cout << endl;
    return 0;
}
