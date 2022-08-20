class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        vector<vector<long>> dp(n+1, vector<long> (n+1,0));
        
        for(int i=0; i<n+1; i++){
            dp[i][0] = startFuel;
        }
        
        for(int i=1; i<n+1; i++){ //station
            for(int j=i; j>=1; j--){ //refill
                
                long a = 0;
                if (dp[i-1][j-1]>=stations[i-1][0]){
                    a = dp[i-1][j-1]+stations[i-1][1];
                }
                
                long b = dp[i-1][j];
                
                dp[i][j] = max(a,b);
                
            }
        }
        
        for(int j=0; j<n+1; j++){
            if (dp[n][j]>=target) return j;
        }
        return -1;
        
    }
};