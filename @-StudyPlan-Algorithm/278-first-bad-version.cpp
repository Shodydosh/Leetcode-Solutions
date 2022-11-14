// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
	{
		int start = 0;
		int end = n;
		long long mid=0, ans = -1;

		if(isBadVersion(1)==true)
			return 1;

		while(start<=end)
		{
			mid=start + (end-start)/2;
			if(isBadVersion(mid)==true){
                ans = mid;
				end=mid-1;
            }
			else{
				start=mid+1;
            }
		}
		return ans;
    }
};
