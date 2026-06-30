class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s .size() ;
        int cnt[3] = {0} ;
        int l = 0 , ct = 0 ;

        for(int r = 0 ; r < n ; r++) {
            cnt[s[r] - 'a']++ ;

            while(cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0) {

                ct += n - r ;
                cnt[s[l] - 'a']-- ;
                l++ ;
            }
        }
        return ct ;
    }
};


/**

TLE


class Solution {
public:
    int numberOfSubstrings(string s) {
        // unordered_map<int,int> cnt ;
        int n = s .size() ;
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            bool a , b , c ;
            a = b = c = false ;
            int i = i ;
            int last = 0 ;
            while(i<n) {
                if(s[i] == 'a')
                    a = true ;
                else if(s[i] == 'b')
                    b = true ;
                else
                    c = true ;

                if(a && b && c)
                    break ;
                last = i  ;
                i++ ;
            }
            if(a && b && c)
                cnt += n - last -1 ;

        }
        return cnt ;
    }
};



// best
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int cnt = 0;

        int a, b, c;
        a = b = c = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a')
                a = i;
            else if (s[i] == 'b')
                b = i;
            else
                c = i;

            if (a != -1 && b != -1 && c != -1) {
                cnt += min({a,b,c}) + 1 ;

            }
            
        }
        return cnt ;
    }
};





*/