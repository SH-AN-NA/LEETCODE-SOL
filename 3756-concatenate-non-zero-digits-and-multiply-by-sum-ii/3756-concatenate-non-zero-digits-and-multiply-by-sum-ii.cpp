const int MOD = 1e9 + 7;
const int maxi = 100001;
long long pow10[maxi];

// init runs only once for all test cases
int init = []() {
    pow10[0] = 1;
    for (int i = 1; i < maxi; ++i) {
        pow10[i] = (pow10[i - 1] * 10) % MOD;
    }
    return 0;
}();

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size() ;
        vector<int> sum(n + 1, 0) ;
        vector<long long> x(n + 1, 0) ;
        vector<int> cnt(n + 1, 0) ;

        for (int i = 0; i < n; ++i) {
            int d = s[i] - '0' ;
            sum[i + 1] = sum[i] + d ;
            x[i + 1] = (d > 0) ? (x[i] * 10 + d) % MOD : x[i];
            cnt[i + 1] = cnt[i] + (d != 0) ;
        }

        int m = queries.size() ;
        vector<int> res(m, 0) ;

        for (int i = 0; i < m; ++i) {
            int l = queries[i][0] ;
            int r = queries[i][1] + 1 ;
            int length = cnt[r] - cnt[l] ;
            long long valx = (x[r] - x[l] * pow10[length] % MOD + MOD) % MOD;
            long long valsum = sum[r] - sum[l];
            res[i] = (valx * valsum) % MOD;
        }
        return res;
    }
};

// 1034021212
// 1,1 1,1 4,2