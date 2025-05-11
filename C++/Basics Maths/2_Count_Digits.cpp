/*    Code360 Problem: Count Digits  */

/*
    Code360 Link               : https://www.naukri.com/code360/problems/count-digits_8416387?leftPanelTabValue=PROBLEM
*/

int countDigits(int n){
	// Write your code here.	
	int count = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0)
        count = count + 1;
        n = n / 10;
    }
    return count;
}