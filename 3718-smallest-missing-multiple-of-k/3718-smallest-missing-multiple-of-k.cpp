class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,bool> seen ;
        for(int i : nums) {
            if(i%k == 0)
                seen[i/k] = 1 ;
        }

        for(int i = 1 ; i < 101 ; i++) {
            if(seen[i] != 1)
                return k*i ;
        }

        return 101*k ;
    }
};