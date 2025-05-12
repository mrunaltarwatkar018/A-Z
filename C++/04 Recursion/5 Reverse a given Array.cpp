/*    Problems on Functional Recursion  */

/*      Problem : Reverse a given Array  
        Link: https://takeuforward.org/data-structure/reverse-a-given-array/
*/

// Approach 1: Using an extra array - 
// - Declare an array,ans[] of the same size as the input array. Iterate from the back of the input array while storing the elements in ans[]  in opposite direction.
// TC: O(N)
// SC: O(N) - for the new array
#include <iostream>
using namespace std;

void printArray(int ans[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

void reverseArray(int arr[], int n) {
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[n - i - 1] = arr[i];
    }
    printArray(ans, n);
}

int main() {
    int n = 5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr, n);
    return 0;
}


// Approach 2: Space-optimized iterative method
// - Unlike the previous method we use the same array to obtain the result
// TC: O(N)
// SC: O(1) - no extra space used
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int n) {
    int p1 = 0, p2 = n - 1;
    while (p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++; p2--;
    }
    printArray(arr, n);
}

int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}


// Approach 3: Recursive method
// - The recursive method has an approach almost similar to the iterative one. The approach has been broken down into some steps for simplicity.
// TC: O(N)
// SC: O(1)

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}
int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1 };
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}


// Approach 4: Using library function (New Approach)

/*
        The std::reverse function in C++ is predefined in a header file algorithm.
        Syntax: 
            array_name.reverse(BidirectionalIterator first, BidirectionalIterator last)

        Bidirectional iterators first and last indicate the starting and ending positions in the array. Elements that lie in this range are reversed. Note that this range includes the first but excludes the last element.
*/

// TC: O(N)
// SC: O(1) - no extra space used

#include <iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int n) {
    reverse(arr, arr + n);
}
int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1 };
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
}