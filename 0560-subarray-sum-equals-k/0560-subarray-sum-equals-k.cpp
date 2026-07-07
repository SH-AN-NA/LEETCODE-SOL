class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int sum = 0 ;
            for(int r = i ; r < nums.size() ; r++)
            {
                sum += nums[r] ;
                if(sum == k) {
                    cnt++ ;
                }
            }
        } 
        return cnt ;
    }
};