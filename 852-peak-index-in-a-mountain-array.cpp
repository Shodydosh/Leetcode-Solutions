class Solution {
public:
    int ans = -1;

    void find(vector<int>& arr, int left, int right){
        int mid = left + (right - left)/2;
        
        if(left >= right || ans != -1 || mid >= arr.size()) return;

        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]) ans = mid;

        else if(arr[mid-1] < arr[mid] && arr[mid+1] > arr[mid]) find(arr, mid, right);
        else find(arr, left, mid);
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        find(arr, 0, arr.size()-1);
        return ans;
    }
};
