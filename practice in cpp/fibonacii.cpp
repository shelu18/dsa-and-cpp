#include<iostream>
using namespace std;

// Function to find the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    
        cout << "Fibonacci Series up to the " << n << "th term:" << endl;
        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
    
    
    return 0;
}
