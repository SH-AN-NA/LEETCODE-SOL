auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0 , maxi = 0 ;
        for(char c : s) {
            if(c=='(')
                cnt++ ;
            if(c==')')
                cnt-- ;

            maxi = max(cnt,maxi) ;
        }
        return maxi ;
    }
};