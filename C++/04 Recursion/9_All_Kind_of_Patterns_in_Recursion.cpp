/*    Problems based on Recursion on Subsequences  */

/*      Problem : Print all Subsequences  
        Link:
*/



/*
    structure of the code:

        f(idx, [], s) {
            if (idx == n) {   // base case
                if (s == sum) {
                    print(ds) // print the subsequence
                }
                return;
            }
            ds.add(arr[idx], s += arr[idx]);
            f(idx + 1, ds, s);
            ds.remove(arr[idx], s -= arr[idx]);
            f(idx + 1, ds, s);
        }

        main() {
        arr = [1, 2, 1];
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
    overall Time Complexity : O(n * 2^n)
    Space Complexity: O(n)
    where n is the size of the array.
*/


// #include <bits/stdc++.h>
// using namespace std;

// void printS(int idx, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if (idx == n) {
//         if (s == sum) {
//             for (auto it : ds) {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     // take or pick the particular index into the subsequence
//     // include the element
//     ds.push_back(arr[idx]);
//     s += arr[idx];
//     printS(idx + 1, ds, s, sum, arr, n);
//     s -= arr[idx];

//     // not pick, or not take condition, element is not included in the subsequence
//     // exclude the element
//     ds.pop_back();
//     printS(idx + 1, ds, s, sum, arr, n);
// }


// int main() {
//     int arr[] = {1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);

//     return 0;
// }




// using global variable but not recommended

// #include <bits/stdc++.h>
// using namespace std;

// int flag = 0; 
// void printS(int idx, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if (idx == n) {
//         if (s == sum && flag == false) {
//             flag -= true;
//             for (auto it : ds) {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     // take or pick the particular index into the subsequence
//     // include the element
//     ds.push_back(arr[idx]);
//     s += arr[idx];
//     printS(idx + 1, ds, s, sum, arr, n);
//     s -= arr[idx];

//     // not pick, or not take condition, element is not included in the subsequence
//     // exclude the element
//     ds.pop_back();
//     printS(idx + 1, ds, s, sum, arr, n);
// }


// int main() {
//     int arr[] = {1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     printS(0, ds, 0, sum, arr, n);

//     return 0;
// }

// output:
// 1 1





// Functional Methods


// Technique to print always one subsequence or one answer
#include <bits/stdc++.h>
using namespace std;

bool printS(int idx, vector<int> &ds, int s, int sum, int arr[], int n) {
    if (idx == n) {
        // condition satisfied
        if (s == sum) {
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
            return true; // return true if condition is satisfied
        }
        else return false; // return false if condition is not satisfied
    }

    ds.push_back(arr[idx]);
    s += arr[idx];
    if (printS(idx + 1, ds, s, sum, arr, n) == true) {
        return true; // if condition is satisfied, return true
    }
    s -= arr[idx];

    ds.pop_back();
    if (printS(idx + 1, ds, s, sum, arr, n) == true) {
        return true; // if condition is satisfied, return true
    }

    return false; // if condition is not satisfied, return false
}


int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);

    return 0;
}