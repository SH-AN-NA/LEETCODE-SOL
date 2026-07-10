class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<pair<int, int>> sortedNodes(n) ;
        for (int i = 0; i < n; ++i) 
            sortedNodes[i] = {nums[i], i};
        
        sort(sortedNodes.begin(), sortedNodes.end()) ;

        vector<int> posInSorted(n) ;

        for (int i = 0; i < n; ++i) 
            posInSorted[sortedNodes[i].second] = i;

        vector<int> next_hop(n) 
        ;
        int r = 0;
        for (int l = 0; l < n; ++l) {
            while (r < n && sortedNodes[r].first - sortedNodes[l].first <= maxDiff) {
                r++;
            }
            next_hop[l] = r - 1; 
        }

        int LOG = log2(n) + 2;
        vector<vector<int>> up(LOG, vector<int>(n));
        
        for (int i = 0; i < n; ++i) {
            up[0][i] = next_hop[i];
        }

        for (int k = 1; k < LOG; ++k) {
            for (int i = 0; i < n; ++i) {
                up[k][i] = up[k - 1][up[k - 1][i]];
            }
        }

        vector<int> answer;
        answer.reserve(queries.size());

        for (const auto& q : queries) {
            int u = posInSorted[q[0]];
            int v = posInSorted[q[1]];

            if (u == v) {
                answer.push_back(0);
                continue;
            }
            if (u > v) swap(u, v); 

            int max_reach = u;
            for (int k = LOG - 1; k >= 0; --k) {
                max_reach = up[k][max_reach];
            }
            if (max_reach < v) {
                answer.push_back(-1);
                continue;
            }

            int steps = 0;
            for (int k = LOG - 1; k >= 0; --k) {
                if (up[k][u] < v) {
                    steps += (1 << k);
                    u = up[k][u];
                }
            }

            steps += 1;
            answer.push_back(steps);
        }

        return answer;
        
    }
};