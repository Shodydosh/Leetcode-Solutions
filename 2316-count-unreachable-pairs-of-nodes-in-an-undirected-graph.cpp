class Solution {
public:
    int visited[100005] = {};
    vector<int> ans;
    void bfs(int u,  vector<int> adj[], int& cnt){
        queue<int> q;
        q.push(u);
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            if(!visited[tmp]){
                visited[tmp] = 1;
                cnt++;
                for(auto x : adj[tmp])
                        q.push(x);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[100005];
        for(auto x : edges){
            adj[x[1]].push_back(x[0]);
            adj[x[0]].push_back(x[1]);
        }     

        long long res = 0, tmp = 0;
        for(int i=0; i<n; i++){
            int cnt = 0;
            if(!visited[i]){
                bfs(i, adj, cnt);
                res += tmp * cnt;
                tmp += cnt;
                cnt = 0;
            }
        }

        return res;   
    }
};
