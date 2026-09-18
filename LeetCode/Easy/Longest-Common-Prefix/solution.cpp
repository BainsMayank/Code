class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0;
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return strs[0].substr(0,count);;
                }
            }
            count++;
        }
        return strs[0].substr(0,count);
    }
};