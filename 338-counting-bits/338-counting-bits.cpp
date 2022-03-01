class Solution {
public:
    int countSetBit(int n) {
        int cnt = 0;
        while(n) {
            cnt += n&1;
            n = n >> 1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> res;  
        for(int i = 0 ; i <=n; ++i) {
            int setbit = countSetBit(i);
            res.push_back(setbit);
        }
        return res;
    }
};