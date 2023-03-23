class Solution {
public:
    void dfs(vector<int> adj[], vector<int> &visited, int src){
        visited[src] = 1;
        for(auto x : adj[src]){
            if(!visited[x]){
                dfs(adj, visited, x);
            }
        } 
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        vector<int> adj[n];
        for(auto x : connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int> visited(n, 0);
        int ans = 0;
        for(int i=0; i<n; i++)
            if(!visited[i]){
                dfs(adj, visited, i);
                ans++;
            }
        if(ans) return ans-1;
        return -1;
    }
};
