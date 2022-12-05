class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check Rows
        for(int i=0; i<9; i++){
            set<char> t;
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    int tmp = t.size();
                    t.insert(board[i][j]);
                    if(tmp == t.size()) return 0;
                }
            }
        }

        // Check Columns
        for(int i=0; i<9; i++){
            set<char> t;
            for(int j=0; j<9; j++){
                if(board[j][i] != '.'){
                    int tmp = t.size();
                    t.insert(board[j][i]);
                    if(tmp == t.size()) return 0;
                }
            }
        }

        // Check SubBox
        for(int x=0; x< 9; x+=3){
            for(int y=0; y<9; y+=3){
                
                set<char> t;
                for(int i=x; i<x+3; i++){
                    for(int j=y; j<y+3; j++){
                        if(board[i][j] != '.'){
                            int tmp = t.size();
                            t.insert(board[i][j]);
                            if(tmp == t.size()) return 0;
                        }
                    }
                }

            }
        }

        return 1;
        
    }
};
