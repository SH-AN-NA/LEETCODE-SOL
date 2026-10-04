class Solution {
public:
    bool checkValidString(string s) {
        int left = 0 , right = 0 , star = 0 ;
        for(char c : s) {
            if( c == '(')
                left++ ;
            else if(c == ')')
                right++ ;
            else
                star ++ ;

            if(right - left > star)
                return false ;
        }
        reverse(s.begin(),s.end()) ;
        left = 0 , right = 0 , star = 0 ;
        for(char c : s) {
            if( c == '(')
                left++ ;
            else if(c == ')')
                right++ ;
            else
                star ++ ;

            if( left - right > star)
                return false ;
        }
        return true ;
    }
};