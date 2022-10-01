typedef long long ll;
class Solution{
public:
int dp[101];
string s;
int numDecodings(string &S){
s=S;
memset(dp,-1,sizeof(dp));
ll ans=help(0);
return ans;
}
ll help(int pos){
if(pos>=s.size())
    return 1;

if(dp[pos]!=-1)
return dp[pos];

if(s[pos]=='0')
return dp[pos]=0;

ll ans=help(pos+1);

if(s[pos]=='1'&&pos+1<s.size())
ans+=help(pos+2);

if(s[pos]=='2'&&pos+1<s.size()&&s[pos+1]<='6')
ans+=help(pos+2);

return dp[pos]=ans;
}
};
