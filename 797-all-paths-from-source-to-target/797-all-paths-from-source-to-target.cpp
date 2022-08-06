class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int>& path,int currentNode){
        path.push_back(currentNode);
        if(currentNode==graph.size()-1){
            ans.push_back(path);
        }
        else{
            for(auto node:graph[currentNode]){
                dfs(graph,ans,path,node);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>> ans;
       vector<int> path;
        
        dfs(graph,ans,path,0);
        return ans;
    }
};