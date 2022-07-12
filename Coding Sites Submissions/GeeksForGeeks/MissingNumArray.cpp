// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        /*
        //This is exceeding time limit
        vector<int>::iterator it;
        for(int i=1; i<=n; i++){
            it = find(array.begin(),array.end(),i);
            if(it == array.end())
                return i;
        }
        return -1;*/
        
        /*
        sort also didn't worked
        sort(array.begin(),array.end());
        for(int i=1; i<=n; i++){
            if(i!=array[i])
                return i;
        }
        return -1;*/
        
        int real_sum = n*(n+1)/2;
        int given_sum = 0;
        for(auto x: array){
            given_sum += x;
        }
        return (real_sum - given_sum);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends