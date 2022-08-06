class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>> m;
        vector<int> setSize,ans(k,0);
        for(auto x:logs){
            m[x[0]].insert(x[1]);
        }
        for(auto x:m){
            setSize.push_back(x.second.size());
        }
        for(auto x: setSize){
            ans[x-1]++;
        }
        return ans;
    }
};