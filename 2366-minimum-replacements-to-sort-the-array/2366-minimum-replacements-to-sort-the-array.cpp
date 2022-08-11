typedef long long int lli;
class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
       lli ans = 0;
       lli nxt = 1e9+7;
       for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=nxt){
                nxt=nums[i];
                continue;
            }
            lli parts = ceil(nums[i]/double(nxt));
            ans += parts-1;
            nxt = nums[i]/parts;
       }
        return ans;
    }
};