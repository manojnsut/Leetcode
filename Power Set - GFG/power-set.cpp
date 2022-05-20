// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int len = s.size();
		    vector<string> res;
		    for(int cnt = 0; cnt < (1 << len); ++cnt) {
		        string temp ="";
		        for(int chars = 0; chars < len; chars++ ) {
		             if( cnt & (1 << chars))
		                 temp += s[chars];
		        }
		        if(temp.size())
		            res.push_back(temp);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends