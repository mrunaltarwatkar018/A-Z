/*    Code360 Problem: Number of Digits  */


/*
    Code360 Link               : https://www.naukri.com/code360/problems/number-of-digits_4538242?leftPanelTabValue=PROBLEM
*/


// Approach 1:  The number of digits in a number can be calculated by repeatedly dividing the number by 10 until it becomes 0. Each division corresponds to one digit.

#include <bits/stdc++.h> 
int countDigit(long long n) {
    // Write your code here.
    long count = 0;
    long original = n;

    while (n > 0) {
        long digit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    return count;
}



// Approach 2:  The logarithmic base 10 of a positive integers gives the number of digits in n. We add 1 to the result to ensure that the count is correct even for numbers that are powers of 10.
// We cast the result to an integer to ensure that any fractional part is discarded giving the exact count of digits.

                                
#include <bits/stdc++.h> 
int countDigit(long long n) {
    // Write your code here.
    int cnt = (int)(log10(n)+1);
    return cnt;

}