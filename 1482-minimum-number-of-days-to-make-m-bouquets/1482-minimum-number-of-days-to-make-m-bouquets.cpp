class Solution {
public:
    int boq(vector<int>& a , int day , int k) {
        int n = a.size() ;
        int seglen = 0 , seg = 0 ;

        for(int i = 0 ; i < n ; i++) {
            if(a[i]<=day){
                seglen++ ;
                if(seglen == k) {
                    seglen = 0 ;
                    seg++ ;
                }      
            }
            else
                seglen = 0 ;
            
        }
        if(seglen == k)
            seg++ ;
        return seg ;
    }
    int minDays(vector<int>& a, int m, int k) {
        int l = *min_element(a.begin(),a.end()) ;
        int h = *max_element(a.begin(),a.end()) ;
        int ans = -1 ;
        while(l<=h) {
            int mid = l + (h-l)/2 ;
            int boquet = boq(a,mid,k) ;
            if(boquet >= m) {
                ans = mid ;
                h = mid - 1 ;
            }
            else
                l = mid + 1 ;
        }
        return ans ;
    }
};