class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long sum = 0 ;
        int mini = INT_MAX ;
        for(int i = 0 ; i < prices.size() ; i++) {
            sum += max(0,prices[i]-mini) ;
            mini = prices[i] ;
        }
        return (int)sum ;
    }
};