class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> group(n, 0);
        int gcnt = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] > maxDiff) {
               gcnt ++;
            }
            group[i] = gcnt ;
        }
        
        vector<bool> answer;
        answer.reserve(queries.size());
        
        for (auto query : queries) {
            int u = query[0];
            int v = query[1];
            
            answer.push_back(group[u] == group[v]);
        }
        
        return answer;
    }
};