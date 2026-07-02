class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int maxi = INT_MIN , sol = 0 ;
        // for(int i = 0 ; i <= nums.size()-1 ; i++)
        // {
        //     if(maxi<nums[i])
        //     {
        //         sol = i ;
        //         maxi = nums[i] ;
        //     }
        // }
        int l = 0 , r = nums.size()-1 ;
        while(l<r)
        {
            int mid = (l+r)/2 ;
            // if(mid==l || mid== r)
            //     return mid ;
            if(nums[mid] < nums[mid+1]) {
                l = mid + 1 ;
            }
            else {
                r = mid ;
            }    
        }
        return l ;
    }
};