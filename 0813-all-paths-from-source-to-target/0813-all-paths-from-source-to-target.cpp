class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> allPaths; 
        vector<int> path ; 
        dfs(graph , path , allPaths , 0) ;         
        return allPaths;
    }

    void dfs(vector<vector<int>>& graph , vector<int>&path, vector<vector<int>> &allPaths , int node){
        path.push_back(node) ; 
        if(node == (int)graph.size()-1) allPaths.push_back(path) ; 
        else{
            for(auto neighbour : graph[node]){
                dfs(graph,path,allPaths,neighbour) ; 
            }
        }

        path.pop_back() ; 
    }
};