class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt(256,0) ;
        for(char c : s)
            cnt[c]++ ;

        for(char c : t)
            cnt[c]-- ;

        for(int i : cnt)
            if(i!=0) {
                return false ;
            }
        return true ;     
    }
};