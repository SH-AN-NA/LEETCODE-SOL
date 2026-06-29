class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0 , curr = 0 ;
        for(int it : gain) {
            curr += it ;
            alt = max(curr,alt) ;
        }
        return alt ;
    }
};