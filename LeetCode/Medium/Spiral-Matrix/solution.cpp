class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<int> ans;

        int i = 0, j = 0;

        int horizontal = 1;
        int vertical = 1;
        bool moveHorizontal = true;

        for(int k = 0; k < m*n; k++) {

            ans.push_back(matrix[i][j]);
            visited[i][j] = true;

            int ni = i, nj = j;

            if(moveHorizontal) {
                nj += horizontal;
            }
            else {
                ni += vertical;
            }

            if(ni < 0 || ni >= m || nj < 0 || nj >= n ||
               visited[ni][nj]) {

                if(moveHorizontal) {
                    moveHorizontal = false;
                    horizontal *= -1;

                    ni = i + vertical;
                    nj = j;
                }
                else {
                    moveHorizontal = true;
                    vertical *= -1;

                    ni = i;
                    nj = j + horizontal;
                }
            }

            if(k < m*n - 1) {
                i = ni;
                j = nj;
            }
        }

        return ans;
    }
};