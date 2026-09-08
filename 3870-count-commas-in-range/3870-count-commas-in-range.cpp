class Solution {
public:
    int countCommas(int n) {
        int digits = 0 ;
        int temp = n ;
        while(n != 0) {
            n /= 10 ;
            digits++ ;
        }
        
        n = temp ;
        int ans = 0 ;
        // if(digits > 5) {
        //     ans += pow(10,5) - n ;
        // }

        if(digits >= 4) {
            ans = n - pow(10,3) + 1;
        }
        return ans ;
    }
};