class Solution {
public:

    bool bfs(vector<vector<int>>& graph, int start, int color[]){
        int n = graph.size();
        int m = graph[0].size();
        queue<int> q;
        q.push(start);
      
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto it: graph[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
          int color[n];
        for(int i=0;i<n;i++){
            color[i]=-1;
        }
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                if(bfs(graph,i,color)==false){
                    return false;
                }
            }
        }
        return true;
    }
};