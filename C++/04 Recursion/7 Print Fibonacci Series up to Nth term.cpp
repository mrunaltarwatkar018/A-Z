/*    Problems on Functional Recursion  */

/*      Problem : Print Fibonacci Series up to Nth term  
        Link: https://takeuforward.org/arrays/print-fibonacci-series-up-to-nth-term/
*/


// Approach 1: Native Approach
// TC: O(N) + O(N)
// SC: O(N) - for the stroring fibonacci series

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    if (n == 0) {
        cout << 0;
    } else if (n == 1) {
        cout << 0 << " " << 1 << "\n";
    } else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
        for (int i = 0; i <= n; i++) {
        cout << fib[i] << " ";
        }
    }
}


// Approach 2: Space Optimized Approach
// TC: O(N)
// SC: O(1) - no extra space used
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 5;
	if (n == 0) {
        cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
	}
	else {
		int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
			cout << cur << " ";
		}
	}
}


// Approach 3: Using Recursion
// TC: O(2^N)
// SC: O(N) - for the function call stack
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
    if(N <= 1) {
        return N;
    }

    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);
    
    return last + slast;
}

int main(){
    int N = 4;
    cout<<fibonacci(N)<<endl;
    return 0;
}