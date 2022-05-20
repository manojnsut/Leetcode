// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int lookup[256];
    
    void init() {
        lookup[0] = 0;
        for(int i = 1; i < 256; ++i) {
            lookup[i] = ( i & 1) + lookup[i/2];
        }
    }
    
    int findSetBit(int n) {
        int cnt = lookup[ n & 0xff];
        n >>= 8;
        cnt += lookup[ n & 0xff];
        n >>= 8;
        cnt += lookup[ n & 0xff];
        n >>= 8;
        cnt += lookup[ n & 0xff];
        return cnt;
    }
    int setBits(int N) {
        // Write Your Code here
       init();
       return findSetBit(N);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends