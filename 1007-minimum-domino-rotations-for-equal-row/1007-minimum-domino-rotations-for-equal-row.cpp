class Solution {
public:
    
    //finds the maximum frequency
    int maxfreq(vector<int>&v) {
        int cnt = 0;
        for(int i = 1; i <=6; ++i)
              cnt = max(cnt,v[i]);
        return cnt;
    }
    
    //find the maximum frequency element
    int findmax(vector<int>&v,int x) {
        int idx = 0;
        for(int i = 1; i <= 6; ++i)
               if(v[i] == x) {
                   idx = i;
                   break;
               }
        return idx;
    }
    
    
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        //stores frequency of numbers 1 to 6
        vector<int> freqTop(7,0);     
        vector<int> freqBottom(7,0);
        
        for(int i = 0; i < n; ++i) {
            freqTop[tops[i]]++;
            freqBottom[bottoms[i]]++;
        }
        
        //finding max frequency
        int maxFreqTop = maxfreq(freqTop);
        int maxFreqBottom = maxfreq(freqBottom);
        
        int cnt1 = 0, cnt2 = 0;
        
        if(maxFreqTop > maxFreqBottom) {
            int mxt = findmax(freqTop,maxFreqTop);
            for(int i = 0; i < n; ++i) {
                if(tops[i] != mxt && (bottoms[i] == mxt))
                    cnt1++;  
            }
            if(cnt1 + maxFreqTop  != n)
                return -1;
            else
                return cnt1;
        }
        else {
            int mxb = findmax(freqBottom,maxFreqBottom);
            for(int i = 0; i < n; ++i) {
                if(bottoms[i] != mxb && (tops[i] == mxb))
                    cnt2++;  
            }
            if(cnt2 + maxFreqBottom  != n)
                return -1;
            else
                return cnt2;
        }
    }
};