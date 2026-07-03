auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int result(vector<int>& a , int mid) {
        int n = a.size() ;
        int res = 0 ;
        for(int i = 0 ; i < n ; i++) {
            res += (a[i]+mid-1)/mid ;
        }
        return res ;
    }
    int smallestDivisor(vector<int>& a, int threshold) {
        int l = 1 , h = *max_element(a.begin(),a.end()) ;
        int sol = 0 ;
        while(l<=h) {
            int mid = (h+l)/2 ;
            int res = result(a,mid) ;
            if(res <= threshold) {
                h = mid - 1;
                sol = mid ;
            }
            else
                l = mid + 1;
        }
        return sol ;
    }
};