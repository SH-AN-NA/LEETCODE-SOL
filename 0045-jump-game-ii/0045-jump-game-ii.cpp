class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int steps = 0;
        int i = 0 ;
        while(i < n-1) {
            if(nums[i]+i >= n-1)
                return steps + 1;
            int maxi = 0 , idx = 0 ;
            for(int j = i+1 ; j <= min(n-1,i+nums[i]) ;j++) {
                if(nums[j] + j >maxi) {
                    idx = j ;
                    maxi = nums[j] + j;
                }
            }
            i = idx ;
            steps++ ;
        }
        return steps;
    }
};