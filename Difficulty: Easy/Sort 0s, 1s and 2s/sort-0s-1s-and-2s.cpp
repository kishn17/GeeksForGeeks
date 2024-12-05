//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<arr.size(); i++)
        {
            if(arr[i] == 0)
            count0++;
            
            else if(arr[i] == 1)
            count1++;
            
            else
            count2++;
        }
        
        for(int i = 0; i<count0; i++)
        {
            arr[i] = 0;
        }
        
         for(int i = 0; i<count1; i++)
        {
            arr[count0] = 1;
            count0++;
        }
        
         for(int i = 0; i<count2; i++)
        {
            arr[count0] = 2;
            count0++;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends