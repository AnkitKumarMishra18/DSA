class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start ^ goal;
        int sol = 0;
        
        while (a > 0) {
            sol += a & 1;
            a >>= 1;
        }
        
        return sol;
    }
};
