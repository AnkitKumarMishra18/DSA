class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<int>graph[],int &c)
    {
        vis[node]=1;
        c++;
        for(auto i:graph[node])
        {
            if(!vis[i])
                dfs(i,vis,graph,c);
        }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        
        vector<int>graph[n+1];
        
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int>vis(n+1,0);
        for(auto i:restricted)
            vis[i]=1;
        
        int c=0;
        dfs(0,vis,graph,c);
        return c;
    }
};