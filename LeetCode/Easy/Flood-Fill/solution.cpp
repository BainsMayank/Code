class Solution {
private:
    void dfs(int sr, int sc, vector<vector<int>>& image, int color, int val) {
        if(sr < 0 || sr >= image.size() ||sc < 0 || sc >= image[0].size() ||image[sr][sc] != val) {
            return;
        }
        image[sr][sc] = color;
        dfs(sr-1, sc, image, color, val);
        dfs(sr+1, sc, image, color, val);
        dfs(sr, sc-1, image, color, val);
        dfs(sr, sc+1, image, color, val);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        if(val == color) return image;
        dfs(sr, sc, image, color, val);
        return image;
    }
};