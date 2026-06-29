class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int currmax = 1 , maxi = 1 , currmin = 1 ;
        currmax = maxi = currmin = nums[0] ;
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] < 0)
                swap(currmin , currmax) ;
            currmin = min(nums[i] * currmin ,nums[i]);
            currmax = max(nums[i], currmax*nums[i]) ;

            maxi = max({currmin,currmax,maxi}) ;
            cout << currmin << " " << currmax ;
        }

        return maxi ;
    }
};