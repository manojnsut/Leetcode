// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // optimized solution in n
        int Xor = 0, n1 = 0, n2 = 0;
        vector<int>res;
        
        for(auto x: nums)
            Xor ^= x;
            
        int rightmost_setBit = Xor & -Xor;
        
        for(int i = 0; i < nums.size(); ++i) {
            if( nums[i] & rightmost_setBit)
                n1 ^= nums[i];
            else
                n2 ^= nums[i];
        }
        
        if(n1 > n2)
           swap(n1,n2);
           
        res.push_back(n1);
        res.push_back(n2);
        
        return res;
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