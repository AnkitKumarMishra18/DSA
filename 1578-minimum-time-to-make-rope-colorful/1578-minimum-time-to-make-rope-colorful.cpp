class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int ans =0; // to store time
        for(int i=0;i<c.length()-1;i++){ // traversing string
            if(c[i] == c[i+1]){ // checking if two adjacent char is same 
                if(nt[i] > nt[i+1]) // checking if first char removing time is greater or not 
                    swap(nt[i],nt[i+1]); // swaping values fo that we always remove first char in "aa"
                ans += nt[i]; // adding time to ans
            }
        }
        return ans;
    }
};