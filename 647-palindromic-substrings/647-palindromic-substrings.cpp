class Solution {
private: 
    int countPalindrome(string s, int left, int right) {
        int cnt = 0;
        while(left>=0 && right<s.size() && s[left--]==s[right++] )
               cnt++;
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int cnt = 0;
        for(int i =0;i<s.size();i++){
            cnt+=countPalindrome(s,i,i); //odd length palindrome
            cnt+=countPalindrome(s,i,i+1);
        }
        return cnt;
    }
};