class Solution {
public:
vector<int> topoSort(int n, vector<vector<int>> adj){
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
     if(topo.size()==n) return topo;
     return  {};
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(numCourses);
        for(auto num:prerequisites){
            adj[num[1]].push_back(num[0]);
        }
        return topoSort(n, adj);
    }
};