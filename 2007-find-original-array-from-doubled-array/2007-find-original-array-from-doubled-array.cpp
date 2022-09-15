class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        unordered_map<int, int> hash;      
        if((changed.size()%2) == 1) return ans;
        sort(changed.begin(), changed.end());
        for(auto n : changed) {
            if(hash[n]==0) {
                ans.push_back(n);
                hash[2*n]++;               
            } else {
                hash[n]--;                
            }
        }
        for(auto h : hash) {
            if(h.second != 0) {
                return vector<int>(0);
            }
        }
        return ans;
    }
};