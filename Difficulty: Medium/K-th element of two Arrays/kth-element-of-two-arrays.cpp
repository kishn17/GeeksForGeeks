//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size(), m = b.size();

    vector<int> arr(n + m);
    int i = 0, j = 0, d = 0;
    while (i < n && j < m) {

        // If the element of a[] is smaller, insert the
        // element to the sorted array
        if (a[i] < b[j])
            arr[d++] = a[i++];
        
        // If the element of b[] is smaller, insert the
        // element to the sorted array
        else
            arr[d++] = b[j++];
    }

    // Push the remaining elements of a[]
    while (i < n)
        arr[d++] = a[i++];

    // Push the remaining elements of b[]
    while (j < m)
        arr[d++] = b[j++];

    return arr[k - 1];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends