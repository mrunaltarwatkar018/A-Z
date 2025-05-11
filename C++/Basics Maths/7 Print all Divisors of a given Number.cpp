/*    Code360 Problem: Print all Divisors of a given Number  */



/*
    Code360 Link               : 
        Link 1: https://www.naukri.com/code360/problems/print-all-divisors-of-a-number_1164188
*/


// Approach 1:
// TC: O(n)
// SC: O(1)
int* printDivisors(int n, int &size){
    // Write your code here
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}


// Approach 2:
// TC: O(n)
// SC: O(n)
int* printDivisors(int n, int &size){
    // Write your code here
    int *divisors = new int[n]; 
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisors[count++] = i; 
        }
    }
    size = count; 
    return divisors; 
}



// Approach 3:

/*
    Time Complexity: O(sqrt(N)).
    Space Complexity: O(1).

    where 'N' is the given number.
*/

vector<int> printDivisors(int n)
{
    vector<int> ans;

    // Traversing from 1 to sqrt(N).
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}


/*
    Time Complexity: O(N).
    Space Complexity: O(1).

    where 'N' is the given number.
*/

vector<int> printDivisors(int n)
{
    vector<int> ans;

    // Traversing from 1 to 'N'.
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}