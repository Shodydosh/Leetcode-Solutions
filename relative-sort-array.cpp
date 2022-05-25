class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int fre[1001] = {};
        vector<int> ans;
        for(int i=0; i<arr1.size(); i++){
            fre[arr1[i]]++;
        }
        
        for(int i=0; i<arr2.size(); i++){
            for(int j=0; j<fre[arr2[i]]; j++){
                ans.push_back(arr2[i]);
            }
            fre[arr2[i]] = 0;
        }
        
        sort(arr1.begin(), arr1.end());
        for(int i=0; i<arr1.size(); i++){
            if(fre[arr1[i]] != 0){
                ans.push_back(arr1[i]);
            }
        }
        
        return ans;
    }
};
