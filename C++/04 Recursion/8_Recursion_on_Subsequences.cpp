/*    Problems based on Recursion on Subsequences  */

/*      Problem : Print all Subsequences  
        Link:
*/



/*
    structure of the code:

        f(idx, []) {
            if (idx >= n) {   // base case
                print([])
                return;
            }
            [].add(arr[idx]);
            f(idx + 1, []);
            [].remove(arr[idx]);
            f(idx + 1, []);
        }

        main() {
        arr = [3, 2, 1];
            f(0, []);
        }
*/

/*
    Approach:
        1. We will use recursion to solve this problem.
        2. We will use a vector to store the subsequence.
        3. We will use a base case to stop the recursion when we reach the end of the array.
        4. We will use two cases in the recursion:
            1. Include the current element in the subsequence.
            2. Exclude the current element from the subsequence.
        5. We will print the subsequence when we reach the base case.

    Time Complexity: O(2^n) and 
    overall Time Complexity : O(n * 2^n)
    Space Complexity: O(n)
    where n is the size of the array.
*/


#include <bits/stdc++.h>
using namespace std;

void printF(int idx, vector<int> &ds, int arr[], int n) {
    if (idx == n) {
        for (auto it : ds) {
            cout << it << " ";
        }

        if (ds.size() == 0) {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence
    // include the element
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);

    // not pick, or not take condition, element is not included in the subsequence
    // exclude the element
    ds.pop_back();
    printF(idx + 1, ds, arr, n);
}

void printF(int idx, vector<int> &ds, int arr[], int n) {
    if (idx == n) {
        for (auto it : ds) {
            cout << it << " ";
        }

        if (ds.size() == 0) {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence
    // include the element
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);

    // not pick, or not take condition, element is not included in the subsequence
    // exclude the element
    ds.pop_back();
    printF(idx + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
    printFF(0, ds, arr, n);


    return 0;
}