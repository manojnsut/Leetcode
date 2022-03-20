class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        
    // Count the occurrence of all numbers in A and B,
    // and also the number of domino with two same numbers.
    // Try all possibilities from 1 to 6.
    // If we can make number i in a whole row,
    //it should satisfy that countA[i] + countB[i] - same[i] = n
        
       int n = A.size();
       vector<int> cntA(7,0),cntB(7,0), equal(7,0);
        
        for(int i = 0; i < n; ++i ) {
            cntA[A[i]]++;
            cntB[B[i]]++;
            if(A[i] == B[i]) equal[A[i]]++;
        }
        
        for(int i = 1; i <= 6; ++i) {
            if(cntA[i] + cntB[i] - equal[i] == n)
                 return n - max(cntA[i],cntB[i]);
        }
        
        return -1;
    }
};