class Solution {
public:
    long long nCr(int n, int r) {
        if (r < 0 || r > n) return 0;
        if (r == 0 || r == n) return 1;
        if (r > n - r) {
        r = n - r;
        }
        long long result = 1;
        for (int i = 1; i <= r; ++i) {
            result *= (n - r + i);
            result /= i;
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                ans[i].push_back(nCr(i,j));
            }
        }
        return ans;
    }
};