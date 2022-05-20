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
        n++;
        int power2 = 2;
        int cnt = n / 2; //least significant digit
        
        while( power2 <= n) {
            
            int totalPairs = n / power2;
            
            //total 1s
            
            cnt += (totalPairs /2) * power2;
            
            //if total pairs are odd then there will be extra 1s
            cnt += (totalPairs & 1) ? ( n % power2) : 0;
            
            //next power of 2
            
            power2 <<= 1;
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