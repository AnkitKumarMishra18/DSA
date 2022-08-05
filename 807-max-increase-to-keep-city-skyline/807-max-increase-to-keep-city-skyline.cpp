class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans=0,i,j;
        vector<int> r(n,0),c(n,0);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                r[i] = max(r[i],grid[i][j]);
                c[j] = max(c[j],grid[i][j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                ans+=(min(r[i],c[j]))-grid[i][j];
            }
        }
        return ans;
    }
};