/*    Code360 Problem: Check if a number is Palindrome or Not  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/palindrome-number_624662
*/
#include <bits/stdc++.h> 

bool palindrome(int n)
{
    // Write your code here
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}


/*
    Code360 Link               : 
        Link 2: https://www.naukri.com/code360/problems/check-palindrome_4219630
*/

bool isPalindrome(string &s)
{
	// Write your code here.
	int len = s.length();
	for(int i = 0; i < len/2; i++)
		if(s[i] != s[len-i-1])  return false;
	return true;
}

/*
    LeetCode Link            : 
        Palindrome Number: https://leetcode.com/problems/palindrome-number/description/
*/

class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) {
            return false;
        }
        int revNum = 0;
        int duplicate = n;

        while (n > 0) {
            int lastdigit = n % 10;
            if (revNum > (INT_MAX - lastdigit) / 10) {
                return false;
            }
            revNum = revNum * 10 + lastdigit;
            n = n / 10;
        }

        return duplicate == revNum;
    }
};