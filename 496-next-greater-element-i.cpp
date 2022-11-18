// OJ: https://leetcode.com/problems/next-greater-element-i/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            while(s.size() && s.top() < nums[i]){
                mp[s.top()] = nums[i];
                s.pop();
            }

            s.push(nums[i]);
        }

        vector<int> ans;
        for(int x : findNums) ans.push_back(mp.count(x) ? mp[x] : -1);
        return ans;
    }
};
