class Solution {
public:
    // minimum storing capacity
    int totaldays(vector<int>& a, int mid) { // mid = stroing capacity
        int seglen = 0 , seg= 0 ;
        for(int i = 0 ; i < a.size() ; i++) {
            if(seglen + a[i] <= mid)
                seglen += a[i] ;
            else {
                seglen = a[i] ;
                seg++ ;
            }
        }
        if(seglen > 0)
            seg++ ;
        return seg ;
    }
        
    int shipWithinDays(vector<int>& a, int days) {
        int l = *max_element(a.begin(),a.end()) ;
        int h = accumulate(a.begin(),a.end(),0) ;
        int sol = 0 ;
        while(l<=h) {
            int mid = (h+l)/2 ;
            int cnteddays = totaldays(a,mid) ;

            if(cnteddays <= days) {
                sol = mid ;
                h = mid - 1 ;
            }
            else
                l = mid + 1 ;
        }
        return sol ;
    }
};