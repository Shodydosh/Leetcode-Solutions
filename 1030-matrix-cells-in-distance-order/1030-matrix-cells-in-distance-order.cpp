class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector< vector<int> > ans;
        
        // int to store distance, vector to store coordinates
        multimap< int, vector<int> > mp;
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
               
                // multimap will automatically sort all the pairs it contains
                mp.insert(pair<int, vector<int>>( (abs(i-rCenter) + abs(j-cCenter)), {i, j} ));
                
            }
        }
        
        for(auto i : mp){
            ans.push_back(i.second);
        }
        
        return ans;

    }
};