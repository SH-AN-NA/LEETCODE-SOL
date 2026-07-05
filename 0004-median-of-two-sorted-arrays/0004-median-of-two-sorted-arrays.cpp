class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2,nums1) ;
        int n = nums1.size() ;
        int m = nums2.size() ;

        int l = 0 , h = n ;

        while(l <= h) {

            int cut1 = (l+h)/2 ;
            int cut2 = (n+m+1)/2 - cut1 ;

            int le1 = (cut1 == 0 ? INT_MIN : nums1[cut1-1]) ;
            int le2 = (cut2 == 0 ? INT_MIN : nums2[cut2-1]) ;

            int re1 = (cut1 == n ? INT_MAX : nums1[cut1]) ;
            int re2 = (cut2 == m ? INT_MAX : nums2[cut2]) ;

            if(le1 <= re2 && le2 <= re1)
                if((n+m)%2)
                    return max(le1,le2)/1.0 ;
                else
                    return (max(le1,le2) + min(re1,re2))/2.0 ;

            else if(le1 > re2) // reduce part
                h = cut1 -1 ;
            else
                l = cut1 + 1 ;
        }

        return 0.0 ;

    }
};