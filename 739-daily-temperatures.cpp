class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> v(n, 0);
        stack<pair<int, int>> s;
        for(int i=0; i<n; i++){
            while(!s.empty() && temperatures[i] > s.top().first){
                v[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push(make_pair(temperatures[i], i));
        }
        return v;
    }
};
