// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int maxx=0;
    for(int i = 0; i<n ; i++){
        maxx = max(a[i],maxx);
    }
    
    int count[maxx];
    for(int i=0; i<maxx; i++){
        count[i]=0;
    }
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }
    int c=0;
    for(int i=0; i<n; i++){
        if(count[c]==0)
            c++;
        a[i] = c;
        count[c] -= 1;
    }
    }
    
};

/*

*/

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends