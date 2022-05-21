// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool isPow2(int n){
        return __builtin_popcount(n) == 1;
    }
    int findPosition(int n) {
        // code here
        if(!isPow2(n)) return -1;
        
        int pos = 0; 
        while(n) {
            n >>= 1;
            ++pos;
        }
        
        return pos;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends