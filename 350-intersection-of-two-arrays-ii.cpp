class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> cnt1(1005, 0);
        vector<int> cnt2(1005, 0);
        vector<int> ans;

        for(int x : nums1) cnt1[x]++;
        for(int x : nums2) cnt2[x]++;
        for(int i=0; i<1005; i++){
            if(cnt1[i] > 0 && cnt2[i] > 0){
                for(int j=0; j<min(cnt1[i], cnt2[i]); j++){
                    ans.push_back(i);
                }
            } 
        }
        
        return ans;
    }
};
