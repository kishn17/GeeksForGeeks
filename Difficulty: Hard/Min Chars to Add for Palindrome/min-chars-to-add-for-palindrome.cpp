//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int> computeLPSArray(string &pat) {
    int n = pat.length();
    vector<int> lps(n);

    // lps[0] is always 0
    lps[0] = 0;
    int len = 0;

    int i = 1;
    while (i < n) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }

        else if (pat[i] != pat[len]) {


            if (len != 0) {
                len = lps[len - 1];
            }
           else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
    int minChar(string& s) {
           int n = s.length();
    string rev = s;
    reverse(rev.begin(), rev.end());

    s = s + "$" + rev;

    vector<int> lps = computeLPSArray(s);

    return (n - lps.back());
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends