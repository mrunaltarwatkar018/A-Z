/*    Problems based on Recursion on Subsequences  */

/*      Problem : Count all subsequences with sum K  
        Link:
*/



/*
    structure of the code:

        int f() {
            base condition

            return 1 -> if condition is satisfied
            return 0 -> if condition is not satisfied

            leftFunction = f()
            rightFunction = f()
            return leftFunction + rightFunction;
        }

*/


// Functional Methods


// Technique to print always one subsequence or one answer
#include <bits/stdc++.h>
using namespace std;

int printS(int idx, int s, int sum, int arr[], int n) {
    if (idx == n) {
        // condition satisfied
        if (s == sum) return 1; 
        
        // condition not satisfied
        else return 0; 
    }

    s += arr[idx];
    int left = printS(idx + 1, s, sum, arr, n); 
    s -= arr[idx];

    int right =  printS(idx + 1, s, sum, arr, n);

    return left + right; 
}


int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    cout << printS(0, 0, sum, arr, n);

    return 0;
}