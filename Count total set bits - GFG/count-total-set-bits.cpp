// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        ++n; // a binary system starts from 0
        int power2 = 2;
        int cnt = n / 2; // total numbers of 1s in the LSB
        
        while(power2 <= n) {
            int totalPairs = n / power2; //toatal pairs of 1s and 0s
            cnt += (totalPairs/2)*power2; //toatl number of set bits(1s)
            cnt += (totalPairs & 1) ? ( n % power2) : 0; //unpaired 1s when total pairs are odd
            power2 <<= 1; //next power of 2
        }
        return cnt;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends