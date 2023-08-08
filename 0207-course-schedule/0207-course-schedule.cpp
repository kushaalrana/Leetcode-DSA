class Solution {
public:
    bool dfs(int node, vector<int> &vis, vector<int> &pathvis,  vector<vector<int>> adj){
        vis[node]=1;
        pathvis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it] && dfs(it,vis,pathvis,adj)){
                return true;
            }
            else if(pathvis[it]){
                return true;
            }
        }
        pathvis[node]=0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;   
        vector<int> vis(n,0);
        vector<int> pathvis(n,0);
        //  vector<int> adj[n];
        // for(auto x:prerequisites){
        //     vector<int> data = x;
        //     int a=data[0];
        //     int b=data[1];
        //     adj[a].push_back(b);
        // }
        vector<vector<int>> adj(numCourses);
        for(auto num:prerequisites){
            adj[num[1]].push_back(num[0]);
        }

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,pathvis,adj)){
                    return false;
                }
            }
        }
        return true;
    }
};