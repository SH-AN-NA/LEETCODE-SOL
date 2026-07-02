class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //O(N) //XOR ;
        int l = 0 , h = nums.size() - 1; 
        int sol = 0 ;
        while( l <= h)
        {
            int mid = (l+h)/2 ;
            if(mid == l || mid == h)
                return nums[mid] ;
            if((nums[mid] == nums[mid-1] && mid > 0)) {
                if(mid % 2)
                    l = mid + 1 ;
                else
                    h = mid - 2 ;
            }
            else if(nums[mid] == nums[mid+1] && mid < nums.size() - 1) {
                if((mid+1)%2)
                    l = mid + 2 ;
                else

                    h = mid - 1 ;
            }
            else {
                sol = nums[mid] ;
                break ;
            }
        }

        return sol ;
    }
};