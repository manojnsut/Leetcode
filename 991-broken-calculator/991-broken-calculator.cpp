class Solution {
public:

    int brokenCalc(int s, int t) {
        int op = 0;
        if(s > t) return s - t;
        while ( t > s) {
            if ( t % 2 == 0)
                  t /= 2;
            else
                t++;
            op++;
            if ( s > t) return op + s - t;
        }
        return op;
    }
};