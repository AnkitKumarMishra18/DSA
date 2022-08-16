class Solution {
public:
    int firstUniqChar(string s) {
              
        unordered_map<char,int> m;
        
        for(int i = 0; i < s.length(); i++){
            // storing the number of times the character occured in the string
            m[s[i]]++;
        }
        
        for(int i = 0; i < s.length(); i++){
            // output the first character which the occurance of one time
            if(m[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};