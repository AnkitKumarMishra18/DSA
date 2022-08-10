typedef long long ll;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<ll,ll> mp;
        ll n = nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]-i]++;
        }
        ll ans = n*(n-1)/2;
            for(auto x:mp){
                ans -= x.second*(x.second-1)/2;
            }
        
        return ans;
    }
};