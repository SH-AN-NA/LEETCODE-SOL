class Solution {
public:
    int ncr (int n , int r ) {
        ;
        int sol = 1 ;
        for(int i = 0 ; i < min(r,n-r) ; i++)
            sol = sol*(n-i)/(i+1) ;

        return sol ;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr(n,vector<int>()) ;

        for(int i = 0 ; i < n ; i++) {
            arr[i].assign(i+1,0) ;
            for(int j = 0 ; j <= i ; j++) {
                arr[i][j] = ncr(i,j) ;
            }
        }
        return arr ;
    }
    
};