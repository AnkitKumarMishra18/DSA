class Solution {
public:
    int fillCups(vector<int>& amount) {
       int a = amount[0];
       int b = amount[1];
       int c = amount[2];
       
        int max_num = max(a,max(b,c));
        if(2*max_num > (a+b+c)) return max_num;
        if((a+b+c) & 1) 
            return (a+b+c)/2+1;
        else
            return (a+b+c)/2;
    }
};