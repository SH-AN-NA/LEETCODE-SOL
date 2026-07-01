class Solution {
public:
    bool bs(vector<int>& nums , int l , int r , int x) {
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
        if(sol == -1)
        return false ;
        return true ;
    }
    int lowest(vector<int>& nums , int low , int high) {
        //find lowest element 
        // binary search
        // int low = 0 , high = nums.size() - 1 ;
        // if(nums[low] < nums[high])
        //     return low ;
        while(low < high) {
            int mid = high + low ;
            mid /= 2 ;

            if(nums[mid]>nums[high])
                low = mid + 1 ;
            else if(nums[mid]==nums[high])
                high-- ; ////////DUPLICATEEEEEE
            else
                high = mid ;
        }

        return low ;
    }
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1 ; 
        if (nums.empty()) return false;
        while (high > low && nums[high] == nums[low]) 
            high--;
        int minidx = lowest(nums,low,high) ;

        return (bs(nums,0,minidx,target) || bs(nums,minidx,high+1,target));
            
    }
};