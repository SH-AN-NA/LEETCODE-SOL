class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       
        if (str.empty()) return "";

        sort(str.begin(), str.end());

        // string ans = "";

        int minLength = min(str[0].size(), str[str.size() - 1].size());

        for (int i = 0; i < minLength; i++) {

            if (str[0][i] != str[str.size() - 1][i]) return str[0].substr(0,i);

            // ans += str[0][i];
        }
        return str[0].substr(0, minLength);
        
    }
};