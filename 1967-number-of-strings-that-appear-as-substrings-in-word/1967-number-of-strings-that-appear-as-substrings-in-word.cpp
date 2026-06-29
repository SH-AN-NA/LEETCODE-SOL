class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0 ;
        for(string s : patterns) {
            auto it = word.find(s) ;

            if(it != string::npos)
                cnt++ ;
        }
        return cnt ;
    }
};