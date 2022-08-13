class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        unordered_map<string,int> mp;
        for(auto &w : words) mp[w]++;
        
        int m = words.size(), sz = words[0].size();
        vector<int> ans;
        
        for(int i=0; i<n-(m*sz)+1; ++i){
            unordered_map<string,int> freq;
            int j=0;
            for( ; j<m; ++j){
                string str = s.substr(i+(j*sz), sz);
                if(mp.find(str) != mp.end()){
                    freq[str]++;
                    if(freq[str] > mp[str]) break;
                }else{
                    break;
                }
            }
            if(j == m) ans.push_back(i);
        }
        
        return ans;
    }
};