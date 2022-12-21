class Solution {
public:
    // CLEARER EXPLANATION I FOUND ON YOUTUBE
    // https://www.youtube.com/watch?v=0ACfAqs8mm0

    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>> graph(N+1);
        for(auto pair : dislikes){
            graph[pair.front()].push_back(pair.back());
            graph[pair.back()].push_back(pair.front());
        }

        vector<int> color(N+1, -1);
        // -1 means haven't been colored
        // Two color: 1 and 0

        for(int i=1; i<graph.size(); i++){
            // if not colored && can't be colored 1
            if(color[i] == -1 && !coloringAbility(graph, color, i, 1))
                return false;
        }
        return true;
    }
    bool coloringAbility(vector<vector<int>>& graph, vector<int>& color, int index, int currentColor){
        // color the current num with currentColor
        color[index] = currentColor;

        for(int n : graph[index]){
            // current num dislikes n so if they have the same color => false
            if(color[n] == currentColor) return false;

            // if not colored && can't be colored [1-currentColor]
            if(color[n] == -1 && !coloringAbility(graph, color, n, 1-currentColor)) return false;
        }
        return true;
    }
};
