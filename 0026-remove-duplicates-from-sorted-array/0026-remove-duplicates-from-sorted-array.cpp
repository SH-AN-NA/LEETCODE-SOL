class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int n = nums.size() ;
        int last = 0 ;
        for(int i = 1 ; i < n ; i++) {
            if(nums[i] != nums[last]) {
                last++ ;
                nums[last] = nums[i] ;
            }
        }
        return last + 1 ;
    }
};