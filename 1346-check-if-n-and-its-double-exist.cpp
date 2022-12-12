class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> fre;
        int cnt = 0;
        for(auto x : arr)
            if(x != 0)
                fre[x] += 1;
            else 
                cnt+=1;
        if(cnt >= 2) return 1;
        for(auto x : arr)
            if(fre[x*2]>0) return 1;
        return 0;
    }
};
