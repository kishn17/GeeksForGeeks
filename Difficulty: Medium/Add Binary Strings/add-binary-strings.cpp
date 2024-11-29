//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        s1.erase(0, s1.find_first_not_of('0'));
    s2.erase(0, s2.find_first_not_of('0'));

    // If either string becomes empty, consider it as "0"
    if (s1.empty()) s1 = "0";
    if (s2.empty()) s2 = "0";

    // Ensure s1 is the longer string
    if (s1.size() < s2.size()) {
        swap(s1, s2);
    }

    string result = "";
    int carry = 0, sum = 0;
    int n1 = s1.size(), n2 = s2.size();

    // Add from the end of the strings
    for (int i = 0; i < n1; ++i) {
        int bit1 = s1[n1 - 1 - i] - '0';
        int bit2 = i < n2 ? s2[n2 - 1 - i] - '0' : 0;

        sum = bit1 + bit2 + carry;
        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    // If there's a carry left, add it
    if (carry) {
        result += '1';
    }

    // Reverse the result to get the correct order
    reverse(result.begin(), result.end());

    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends