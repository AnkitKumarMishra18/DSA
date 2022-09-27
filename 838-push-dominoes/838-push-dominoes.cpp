class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        int left[n];
        int nearestLeftIndex=-1;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='L')
                nearestLeftIndex=i;
           else if(dominoes[i]=='R')
                nearestLeftIndex=-1;
            left[i]=nearestLeftIndex;
        }    
    int right[n];
    int nearestRightIndex=-1;
    for(int i=0;i<n;i++){
        if(dominoes[i]=='R')
            nearestRightIndex=i;
       else if(dominoes[i]=='L')
            nearestRightIndex=-1;
        right[i]=nearestRightIndex;
    }
    string ans="";
        for(int i=0;i<n;i++){
            if(dominoes[i]=='.'){
                int nearestLeft=left[i];
                int nearestRight=right[i];
                 int leftDiff = nearestLeft==-1?INT_MAX:abs(nearestLeft-i);
                 int rightDiff = nearestRight==-1?INT_MAX:abs(nearestRight-i);
                if(leftDiff==rightDiff)
                    ans+=".";
                else if(leftDiff<rightDiff)
                    ans+="L";
                else if(leftDiff>rightDiff)
                    ans+="R";
            }
                else
                    ans+=dominoes[i];
            }
        
        return ans;
        }
};