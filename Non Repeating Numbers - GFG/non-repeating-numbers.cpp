// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here
       vector<int> ans;
       int res = 0, n1 = 0,n2= 0;
       
       for(auto x: nums)
           res ^= x;
       
       int setBit = res & -res;
       
       for(auto x: nums) {
           if( x & setBit)
              n1 = n1 ^ x;
           else
              n2 = n2 ^ x;
       }
       
       if(n1 > n2){
           swap(n1,n2);
       }
       ans.push_back(n1);
       ans.push_back(n2);
       
       return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends