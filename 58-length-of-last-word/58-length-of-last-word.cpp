class Solution {
public:
    int lengthOfLastWord(string s) {
        string st = "";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] !=' '){
                st+=s[i];
            }
            else if(st.size()>0 && s[i]==' '){
                break;
            }
        }
        return st.size();
    }
};