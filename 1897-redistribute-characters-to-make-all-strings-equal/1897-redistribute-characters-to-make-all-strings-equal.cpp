class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int freq[26]= {0};
        int n = words.size();

        for(auto &s: words) {
            for(auto &ch: s) {
                freq[ch -'a']++;
            }
        }
        
        for(int i = 0; i < 26; ++i)
             if( freq[i] % n != 0)
                 return false;
        return true;
    }
};