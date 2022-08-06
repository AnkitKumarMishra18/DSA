class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0,temp=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]>capacity){
                ans += 2*i+1;
                capacity=temp;
                capacity-=plants[i];
            }
            else{
                ans++;
                capacity-=plants[i];
            }
        }
        return ans;
    }
};