class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        auto l = lower_bound(arr.begin(), arr.end(), x);
        auto r = upper_bound(arr.begin(), arr.end(), x);
        if (l == arr.end() || *l != x) {
            return {-1, -1};
        }
        
        int first = distance(arr.begin(), l);
        int last = distance(arr.begin(), r) - 1;
        
        return {first, last};
    }

};