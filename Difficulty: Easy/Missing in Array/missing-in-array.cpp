//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        
          int n = arr.size() + 1; // Total numbers from 1 to n
    long long totalSum = (long long)n * (n + 1) / 2; // Sum of numbers from 1 to n
    long long currentSum = 0;

    // Calculate the sum of the given array
    for (int num : arr) {
        currentSum += num;
    }

    // The missing number is the difference between the total sum and the current sum
    return totalSum - currentSum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends