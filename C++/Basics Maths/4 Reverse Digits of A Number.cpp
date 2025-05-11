/*    Code360 Problem: Reverse Digits of A Number  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/reverse-of-a-number_893271
*/

#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here

	long long revNum = 0;

	while(n > 0) {
		long long lastdigit = n % 10;
		revNum = (revNum * 10) + lastdigit;
		n = n / 10;
	}

	return revNum;
}


/*
    Code360 Link               : 
        Link 2: https://www.naukri.com/code360/problems/reverse-of-a-number_624652
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;

	int temp = n;
	int revNum = 0;

	while(temp > 0) {
		int lastdigit = temp % 10;
		temp = temp / 10;
		revNum = (revNum * 10) + lastdigit;
	}

	cout << revNum;
	
}


/*
    LeetCode Link            : 
        Reverse Integer: https://leetcode.com/problems/reverse-integer/
*/

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while(x != 0) {
            int lastdigit = x % 10;

            // Check for overflow/underflow before updating ans & Return 0 if reversing x would cause overflow/underflow
            if ((revNum > INT_MAX / 10) || (revNum < INT_MIN / 10)) {
                return 0;
            }

            revNum = (revNum * 10) + lastdigit;
            x = x / 10;
        }
        return revNum;
    }
};