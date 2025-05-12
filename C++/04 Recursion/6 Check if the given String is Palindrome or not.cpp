/*    Problems on Functional Recursion  */

/*      Problem : Check if the given String is Palindrome or not  
        Link: https://takeuforward.org/data-structure/check-if-the-given-string-is-palindrome-or-not/
*/


// Approach 1: 
// TC: O(N)
// SC: O(1) - no extra space used

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) 
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) 
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;

}
int main() {
    string str = "ABCDCBA";
    bool ans = isPalindrome(str);

    if (ans == true) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;
}


// Approach 2: Recursive Way
// TC: O(N)
// SC: O(1)
#include <iostream>
using namespace std;

bool palindrome(int i, string& s){

    if(i>=s.length()/2) return true;
    
    if(s[i]!=s[s.length()-i-1]) return false;
    
    return palindrome(i+1,s);
}

int main() {

	string s = "madam";
	cout<<palindrome(0,s);
	cout<<endl;
	return 0;
}