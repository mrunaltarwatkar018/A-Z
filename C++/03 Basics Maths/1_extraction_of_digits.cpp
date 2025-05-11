#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        cout << digit << " "; // Print the digit
        n /= 10; // Remove the last digit
    }
}