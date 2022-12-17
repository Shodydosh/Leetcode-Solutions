class Solution {
public:
    int arr[15][15] = {};
    int ans = 0;
    int totalNQueens(int n) {
        Try(0, n);
        return ans;
    }

    void Try(int i, int n){
        if(i == n){
            ans++;
            return;
        }
        for(int j=0; j<n; j++){
            if(validate(i, j, n)){
                arr[i][j] = 5;
                Try(i+1, n);
                arr[i][j] = 0;
            }
        }
    }

    bool validate(int i, int j, int n){
        for(int k=0; k<i; k++) if(arr[k][j]) return 0;
        for(int x = i, y = j; x>=0 && y>=0; x--, y--) if(arr[x][y] == 5) return 0;
        for(int x = i, y = j; x>=0 && y<n; x--, y++) if(arr[x][y] == 5) return 0;
        return 1;
    }
};
