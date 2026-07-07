class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<int> a(10,0) ;
        for(auto it : board) {
            a.assign(10,0) ;
            for(int i : it) {
                if(i >= '1' && i <= '9') {
                    a[i-'0'] ++ ;

                    if(a[i-'0'] > 1)
                        return false ;
                }
            }
        }

        for(int i = 0 ; i < 9 ; i++) {
            a.assign(10,0) ;
            for(int j = 0 ; j < 9 ; j++) {
                if(board[j][i] >= '1' && board[j][i]<= '9') {
                    a[board[j][i]-'0'] ++ ;

                    if(a[board[j][i]-'0'] > 1)
                        return false ;
                }
            }
        }
        for(int i = 0 ; i < 9 ; i++) {
            a.assign(10,0) ;
            for(int j = 0 ; j < 3 ; j++) {
                for(int k = 0 ; k < 3 ; k++) {
                    int row = 3 * (i / 3) + j;
                    int col = 3 * (i % 3) + k;
                    
                    if (board[row][col] >= '1' && board[row][col] <= '9') {
                        a[board[row][col] - '0']++;
                        if (a[board[row][col] - '0'] > 1) 
                            return false;
                    }
                }
            }
        }
        return true ;
    }
};