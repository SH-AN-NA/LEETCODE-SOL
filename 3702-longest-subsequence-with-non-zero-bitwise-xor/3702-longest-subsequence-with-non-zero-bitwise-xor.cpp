class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xurr = 0 ;
        int maxlen = 1 ;
        bool hasNonZero = false;
        if(nums.empty())
            return 0 ;

            if(nums.size() == 1 && nums[0] == 0)
                return 0 ;

        // for(auto i : nums)
        //     xurr ^= i ;

        // if(xurr!=0)
        //     return n ;
        xurr = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i < nums.size() ; i++) {
            xurr ^= nums[i] ;
            if(xurr != 0)
                maxlen = max({maxlen,i+1,n-i-1}) ;

            if (nums[i] != 0) {
                hasNonZero = true;
            }
        }      
        if (!hasNonZero) return 0;
        if (xurr != 0) return nums.size();
        return nums.size() - 1;                                                           
    }
};