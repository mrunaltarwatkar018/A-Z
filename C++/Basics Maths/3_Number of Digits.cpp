/*    Code360 Problem: Number of Digits  */


/*
    Code360 Link               : https://www.naukri.com/code360/problems/number-of-digits_4538242?leftPanelTabValue=PROBLEM
*/

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