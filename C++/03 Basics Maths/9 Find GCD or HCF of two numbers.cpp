/*    Code360 Problem: Find GCD or HCF of two numbers  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/hcf-and-lcm_840448
*/


// Apprach 1: Brute Force
// Time Complexity: O(min(n, m))
// Space Complexity: O(1)
int calcGCD(int n, int m){
    // Write your code here.
    int gcd = 1;

    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}


// Approach 2: Better Approach
// Time Complexity: O(log(min(n, m)))
// Space Complexity: O(1)
int calcGCD(int n, int m){
    // Write your code here.
    for(int i = min(n, m); i > 0; i--) {
        if(n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return 1;
}



// Approach 3: Optimal Approach
// Time Complexity: O(log(min(n, m)))
// Space Complexity: O(1)
int calcGCD(int n, int m){
    // Write your code here.
    while(n > 0 && m > 0) {
        if(n > m) {
            n = n % m;
        }
        else {
            m = m % n; 
        }
    }
    if(n == 0) {
        return m;
    }
    return n;
}
