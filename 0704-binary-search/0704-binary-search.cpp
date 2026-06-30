class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size() - 1 ;
        int sol = -1 ;
        while(l<=r) {
            int mid = (r + l)/2 ;
            if(nums[mid]==target)
            {
                sol = mid ;
                break ;
            }
            else if(nums[mid]>target)
                r = mid - 1;
            else 
                l = mid + 1 ;


        }
        return sol ;
    }
};