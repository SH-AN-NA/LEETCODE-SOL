class Solution {
public:
    string removeOuterParentheses(string s) {
        string t = "" ;
        int cnter = 0 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')
            {
                cnter++ ;
                if(cnter > 1)
                    t += '(' ;
            }
            else {
                if(cnter > 1)
                    t += ')' ;
                cnter-- ;
            }
                
        }
        return t ;
    }
};