class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0 , sum = 0 ;
        int i = 0 ;
        while(n>0) {
            long long rem = n%10 ;
            if(rem != 0) {
                num = num + pow(10,i)*rem ;
                sum += rem ;
                i++ ;
            }
            n /= 10 ;
        }
        return num*sum ;
    }
};