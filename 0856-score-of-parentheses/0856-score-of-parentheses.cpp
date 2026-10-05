class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0 ;

        int left = 0 ;

        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] == '(') {
                left++ ;
            } 
            else {
                left-- ;
                if (s[i - 1] == '(') {
                    score += 1 << left ; 
                }
            }
        }

        return score ;
    }
};