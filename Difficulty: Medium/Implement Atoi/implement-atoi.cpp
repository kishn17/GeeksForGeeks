//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
          int sign = 1, res = 0, idx = 0;

    // Ignore leading whitespaces
    while (s[idx] == ' ') {
        idx++;
    }

    // Store the sign of number
    if (s[idx] == '-' || s[idx] == '+') {
          if(s[idx++] == '-')
          sign = -1;
    }

    // Construct the number digit by digit
    while (s[idx] >= '0' && s[idx] <= '9') {
        
        // handling overflow/underflow test case
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[idx] - '0' > 7)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
      
        // Append current digit to the result
        res = 10 * res + (s[idx++] - '0');
    }
    return res * sign;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends