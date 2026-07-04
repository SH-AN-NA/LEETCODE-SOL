class Solution {
public:
    int currsplits(vector<int>& a, long long maxsum) {
        int splits = 1 ; 
        long long currsum = 0 ;

        for(int i : a) {
            if(currsum + i <= maxsum)
                currsum += i ;
            else {
                splits++ ;
                currsum = i  ;
            }
        }
        return splits ;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end()) ;
        long long h = accumulate(nums.begin(),nums.end() , 0LL) ;
        int sol = 0 ;
        while(l <= h) {
            long long mid = l + (h-l)/2 ;
            int splits = currsplits(nums,mid) ;

            if(splits <= k) {
                sol = mid ;
                h = mid - 1 ;
            }
            else
                l = mid + 1 ;
        }
        return sol ;
    }
};