class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size() ;
        int m = mat[0].size() ;

        // for(int i = 1 ; i < n-1 ; i++) {
            int l = 0 , h = m - 1 ;
            while(l <= h) {
                int mid = (l+h)/2 ;

                int maxRow = 0;
                for (int i = 0; i < n; i++) {
                    if (mat[i][mid] > mat[maxRow][mid]) {
                        maxRow = i;
                    }
                }
                int i = maxRow ;
                int leftNeighbor = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
                int rightNeighbor = (mid + 1 < m) ? mat[maxRow][mid + 1] : -1;

                if (mat[maxRow][mid] > leftNeighbor && mat[maxRow][mid] > rightNeighbor) {
                return {maxRow, mid};
            }
                else if(mat[i][mid] < rightNeighbor)
                    l = mid + 1 ;
                else
                    h = mid - 1 ;
            }
        // }
        return {-1,-1} ;
    }
};