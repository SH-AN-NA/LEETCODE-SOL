class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size() ;
        vector<int> starts(n) , ends(n) ;

        for(int i = 0 ; i < n ; i++) {
            starts[i] = intervals[i][0] ;
            ends[i] = intervals[i][1] ;
        }

        sort(starts.begin(),starts.end()) ;
        sort(ends.begin(),ends.end()) ;

        vector<vector<int>> sol ;
        int last = ends[0] ;
        int curr = starts[0] ;
        for(int i = 1 ; i < n ; i++)
        { 
            vector<int> val(2,0) ;

            if(starts[i] > last)
            {
                val[0] = curr ;
                val[1] = last ;
                last = ends[i] ;
                curr = starts[i] ;
                sol.push_back(val) ;
            }
            else
                last = ends[i] ;

            
        }
        sol.push_back({curr,last}) ;
        return sol ;
    }
};