class Solution {
public:
    int beautySum(string s) {
        int sol = 0 ;
        for(int i = 0 ; i < s.size() ; i++) {
            unordered_map<char,int> cnt ;
            // for(char c : s)
            for(int j = i ; j < s.size() ; j++) {
                cnt[s[j]]++ ;

                int maxi = 0 , mini = 1e9 ;
                for(auto it : cnt) {
                    maxi = max(maxi , it.second) ;
                    mini = min(mini , it.second) ;
                }
                sol += maxi - mini ;
            }
        }
        return sol ;
    }
};