class Solution {
public:
    int bs(vector<int>& nums , int l , int r , int x) {
        int sol = -1 ;
        int low = l , high = r - 1;

        while(low<=high) {
            int mid = high + low ;
            mid /= 2 ;

            if(nums[mid]==x) {
                sol = mid ;
                break ;
            }
            else if(nums[mid] > x)
                high = mid - 1 ;
            else 
                low = mid + 1;            
        }
        return sol ;
    }
    int lowest(vector<int>& nums) {
        //find lowest element 
        // binary search
        int low = 0 , high = nums.size() - 1 ;
        if(nums[low] <= nums[high])
            return low ;
        while(low < high) {
            int mid = high + low ;
            mid /= 2 ;

            if(nums[mid]>nums[high])
                low = mid + 1 ;
            else
                high = mid ;
        }

        return low ;
    }
    int search(vector<int>& nums, int target) {
        
        int minidx = lowest(nums) ;
        int ans = 0 ;
        ans = bs(nums,0,minidx,target) ;
        if(ans == -1)
        ans = bs(nums,minidx,nums.size(),target) ;

        return ans ;
            
    }
};