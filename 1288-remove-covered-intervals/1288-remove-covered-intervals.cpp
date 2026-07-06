class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });
        int n = intervals.size() ;
        int cnt = 0 ;
        int max_end = 0;
        
        for (const auto& curr : intervals) {
            if (curr[1] <= max_end) {
                cnt++;
            } else {
                max_end = curr[1];
            }
        }
        return n - cnt ;
    }
};

// 1 ,4 2 , 9 