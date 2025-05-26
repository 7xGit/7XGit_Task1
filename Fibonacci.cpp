#include <iostream>
using namespace std;

int main() {
    int n=0;
    cout << "Enter how many Fibonacci numbers to generate: "<<endl;;
    while(n<=0){
        cin >> n;
        if(n>0) break;
        cout<<"Plase enter number greater than or equal to 1"<<endl;
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
    cout<<endl;
    return 0;
}
