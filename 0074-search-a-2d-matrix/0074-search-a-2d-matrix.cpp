class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() , m = matrix[0].size() ;

        int l = 0 , h = n-1 ;
        int rowidx = -1 ;
        while(l <= h) {
            int mid = (h+l)/2 ;
            

            if(matrix[mid][0] <= target) {
                rowidx = mid ;
                l = mid + 1 ;
            } else {
                h = mid - 1 ;
            }
        }
        if(rowidx == -1)
            return false ;
        l = 0 , h = m-1 ;

        while(l <= h) {
            int mid = (h+l)/2 ;
            
            // if(mid == 0 || mid == n-1)
            //     return true ;

            if(matrix[rowidx][mid] < target) {
                l = mid + 1 ;
            } 
            else if(matrix[rowidx][mid] == target) {
                return true ;
            }
                
            else {
                h = mid - 1 ;
            }
        }
        return false ;
    }
};