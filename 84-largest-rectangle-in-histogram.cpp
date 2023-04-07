class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int res = INT_MIN, R[n], L[n];
        stack<int> st;
        st.push(-1);
        for(int i=0; i<n; i++){
            while(st.size() > 1 && heights[i] <= heights[st.top()]) st.pop();
            L[i] = st.top() + 1;
            st.push(i);
        }
        while(st.size()) st.pop();
        st.push(n);
        for(int i=n-1; i>=0; i--){
            while(st.size() > 1 && heights[i] <= heights[st.top()]) st.pop();
            R[i] = st.top() - 1;
            st.push(i);
        }
        for(int i=0; i<n; i++)
            res = max(res, heights[i] * (R[i] - L[i] + 1));
        return res;
    }
};
