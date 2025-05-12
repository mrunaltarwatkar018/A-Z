/*    Parameterised and Functional Recursion  */

/*    Problem : Sum of first N Natural Numbers  */

// Approach 1: Using Loops

#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of the first " << n << " numbers is: " << sum << endl;
}

int main() {
    solve(5);
    solve(6);
}

// Approach 2: Using the formula N(N+1)/2

#include <bits/stdc++.h>
using namespace std;

void solve(int N) {
    int sum = N * (N + 1) / 2;
    cout << "The sum of the first " << N << " numbers is: " << sum << endl;
}

int main(){
    solve(5);
    solve(6);
}

// Approach 3: Using Recursion - (A) Parameterized Way
#include <bits/stdc++.h>
using namespace std;

void func(int i, int sum) {
    // Base Condition.
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    // Function call to increment sum by i till i decrements to 1.
    func(i - 1, sum + i);
}

int main() {
    // Here, let’s take the value of n to be 3.
    int n = 3;
    func(n, 0);
    return 0;
}

// Approach 4: Using Recursion - (B) Functional Way

#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    // Base Condition.
    if (n == 0) {
        return 0;
    }

    // Problem broken down into 2 parts and then combined.
    return n + func(n - 1);
}

int main() {
    // Here, let’s take the value of n to be 3.
    int n = 3;
    cout << func(n) << endl;
    return 0;
}