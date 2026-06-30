class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            int l = 0 , r = nums.size() - 1 ;
        int sol = -1 ;
        if(target < nums[0])
            return 0 ;
        if(target > nums[r])
            return nums.size() ;
        
        while(l<=r) {
            int mid = (r + l)/2 ;
            
            if(nums[mid]==target)
            {
                sol = mid ;
                break ;
            }
            else if(nums[mid]>target)
            {
                r = mid - 1;
                // sol = r ;
            }
            else 
            {
                l = mid + 1 ;
                sol = l ;
            }


        }
        return sol ;   
    }
};