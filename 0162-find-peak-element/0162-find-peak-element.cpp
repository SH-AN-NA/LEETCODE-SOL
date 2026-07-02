class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = INT_MIN , sol = 0 ;
        for(int i = 0 ; i <= nums.size()-1 ; i++)
        {
            if(maxi<nums[i])
            {
                sol = i ;
                maxi = nums[i] ;
            }
        }
        return sol ;
    }
};