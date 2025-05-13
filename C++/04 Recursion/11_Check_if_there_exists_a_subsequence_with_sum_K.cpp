/*    Problems based on Recursion on Subsequences  */

/*      Problem : Check if there exists a subsequence with sum K  
        Link: https://takeuforward.org/plus/dsa/problems/check-if-there-exists-a-subsequence-with-sum-k
        GFG link: https://www.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1
*/

/*
        Problem : Check if there exists a subsequence with sum K  
        Link: https://takeuforward.org/plus/dsa/problems/check-if-there-exists-a-subsequence-with-sum-k
    Given an array nums and an integer k. R﻿eturn true if there exist subsequences such that the sum of all elements in subsequences is equal to k else false.


    Examples:
        Input : nums = [1, 2, 3, 4, 5] , k = 8
        Output : Yes
        Explanation : The subsequences like [1, 2, 5] , [1, 3, 4] , [3, 5] sum up to 8.

        Input : nums = [4, 3, 9, 2] , k = 10
        Output : No
        Explanation : No subsequence can sum up to 10.

        Constraints:
            1 <= nums.length <= 20
            1 <= nums[i] <= 100
            1 <= k <= 2000

*/

class Solution{
    public:

    bool solve(int index, int curr_sum, int target, vector<int>& nums) {
        if (curr_sum > target) return false;

        if (index == nums.size()) {
            return curr_sum == target;
        }

        // take the current element
        curr_sum += nums[index];
        if (solve(index + 1, curr_sum, target, nums)) return true;

        // not take the current element
        curr_sum -= nums[index];
        if (solve(index + 1, curr_sum, target, nums)) return true;

        return false;
    }

    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return solve(0, 0, k, nums);
    }
};



/*
    GFG Problem : Check if there exists a subsequence with sum K
    Link: https://practice.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1

    Given an array arr and target sum k, check whether there exists a subsequence such that the sum of all elements in the subsequence equals the given target sum(k).


    Example:

        Input:  arr = [10,1,2,7,6,1,5], k = 8.
        Output:  Yes
        Explanation:  Subsequences like [2, 6], [1, 7] sum upto 8

        Input:  arr = [2,3,5,7,9], k = 100. 
        Output:  No
        Explanation:  No subsequence can sum upto 100

    Your Task:
        You don't need to read or print anything. Your task is to complete the boolean function checkSubsequenceSum() which takes N, arr and K as input parameter and returns true/false based on the whether any subsequence with sum K could be found.


    Expected Time Complexity: O(N * K)
    Expected Auxiliary Space: O(N * K)


    Constraints:
        1 <= arr.length <= 2000
        1 <= arr[i] <= 1000
        1 <= target <= 2000

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool solve(int index, int curr_sum, int target, vector<int>& arr) {
            if (curr_sum > target) return false;

            if (index == arr.size()) {
                return curr_sum == target;
            }

            // take the current element
            curr_sum += arr[index];
            if (solve(index + 1, curr_sum, target, arr)) return true;

            // not take the current element
            curr_sum -= arr[index];
            if (solve(index + 1, curr_sum, target, arr)) return true;

            return false;
        }

        bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
            return solve(0, 0, k, arr);
        }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    
        cout << "~" << "\n";
    }
    return 0;
}