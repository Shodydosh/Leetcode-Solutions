class NumArray {
public:
    vector<int> a;
    NumArray(vector<int>& nums) {
        a = nums;
    }
    
    int sumRange(int left, int right) {
        int ans = 0;
        for(int i=left; i<=right; i++){
            ans += a[i];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
