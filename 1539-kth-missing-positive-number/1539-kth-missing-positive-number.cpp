class Solution {
public:

    int findKthPositive(vector<int>& a, int k) {
        int l = 0 , h = a.size()-1 ;
        while(l<=h) {
            int mid = (h+l)/2 ;
            int curr = a[mid] - (mid + 1);

            if(curr < k)
                l = mid + 1 ;
            else
                h = mid - 1 ;
        }
        return k + h + 1 ;
    }
};