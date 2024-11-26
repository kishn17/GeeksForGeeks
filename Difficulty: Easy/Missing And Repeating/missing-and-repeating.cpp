//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
    long long sumN = (long long)n * (n + 1) / 2; // Sum of first n natural numbers
    long long sumNSq = (long long)n * (n + 1) * (2 * n + 1) / 6; // Sum of squares of first n natural numbers
    
    long long sumArr = 0, sumArrSq = 0;
    for (int num : arr) {
        sumArr += num;
        sumArrSq += (long long)num * num;
    }
    
    long long diff = sumN - sumArr; // a - b (missing - repeating)
    long long diffSq = sumNSq - sumArrSq; // a^2 - b^2 (missing^2 - repeating^2)

    long long sum = diffSq / diff; // a + b (missing + repeating)
    
    int missing = (diff + sum) / 2;
    int repeating = missing - diff;

    return {repeating, missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends