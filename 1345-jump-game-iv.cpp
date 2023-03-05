class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();

        unordered_map<int, vector<int>> mp; 
        // store indexes of intergers that equal
        for(int i=0; i<n; i++)
            mp[arr[i]].push_back(i);

        int steps = 0;
        queue<int> q;
        vector<int> visited(n, 0);
        q.push(0);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int currInd = q.front();
                q.pop();

                if(currInd == n-1)  return steps;

                if(currInd < n-1 && !visited[currInd + 1]){
                    visited[currInd + 1] = 1;
                    q.push(currInd + 1);
                }
                if(currInd - 1 >= 0 && !visited[currInd - 1]){
                    visited[currInd - 1] = 1;
                    q.push(currInd - 1);
                }
                for(int x : mp[arr[currInd]])
                    if(!visited[x]){
                        visited[x] = 1;
                        q.push(x);
                    }

                mp[arr[currInd]].clear();
                // because all num equals to num with 
                // curr index is pushed into queue
            }
            steps++;
        }
        return -1;
    }
};
