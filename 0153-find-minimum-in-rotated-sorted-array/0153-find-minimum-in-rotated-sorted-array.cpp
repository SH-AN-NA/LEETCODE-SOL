class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0 , h = nums.size() - 1 ;
        if(nums[l]<nums[h])
            return nums[l] ;
        while(l<h) {
            int mid = h+l ;
            mid /= 2 ;

            if(nums[mid]>nums[h])
                l = mid + 1 ;
            else
                h = mid  ;
        }
        return nums[l] ;
    }
};