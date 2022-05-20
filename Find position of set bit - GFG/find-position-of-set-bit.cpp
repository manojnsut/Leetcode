// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        // code here
        if( n == 0)
        return -1;
        int pos = 0;
        int cntSetBit = 0; 
        while(n) {
            cntSetBit += (n & 1);
            pos++;
            n >>= 1;
        }
        
        if(cntSetBit > 1)
            return -1;
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