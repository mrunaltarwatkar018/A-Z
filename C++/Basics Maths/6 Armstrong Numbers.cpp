/*    Code360 Problem: Check if a number is Armstrong Number or not  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/armstrong-number_1462443
*/

#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int originalNum = num;

    int k = to_string(num).size();

    int sum = 0;

    while (num > 0) {

        int digit = num % 10;

        sum += pow(digit, k); 

        num /= 10;

    }

    return sum == originalNum;
}


/*
    Code360 Link               : 
        Link 2: https://www.naukri.com/code360/problems/check-armstrong_589
*/
bool checkArmstrong(int num){
	//Write your code here
	int originalNum = num;

    int k = to_string(num).size();

    int sum = 0;

    while (num > 0) {

        int digit = num % 10;

        sum += pow(digit, k); 

        num /= 10;

    }

    return sum == originalNum;
}



/*
    LeetCode Link            : 
        Armstrong Numbers: https://leetcode.com/problems/armstrong-number/description/
*/

