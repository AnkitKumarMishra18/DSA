class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); ++i){
            nums[i] += nums[i-1];
        }
        for(auto q: queries){
            if(q > nums.back()) ans.push_back(nums.size());
            else{
                int n = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
                ans.push_back(n);
        
            }
        }
        return ans;
    }
};