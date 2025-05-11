/*    Code360 Problem: Check if a number is prime or not  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/check-prime_624674
*/


// Approach 1: Brute Force
// TC: O(n)
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cnt++;
        }
    }

    if(cnt != 2) {
        isPrime = false;
    }

    if(isPrime) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}



// Approach 2:
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if ((n/i) != i) cnt++;
        }
    }

    if(cnt == 2) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}




// Approach 3:

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = false;

    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cnt = cnt + 1;
            if(n / i != i) {
                cnt = cnt + 1;
            }
        }
    }

    if(cnt == 2) {
        isPrime = true;
    }

    if(isPrime) {
        cout << "true"<< endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}