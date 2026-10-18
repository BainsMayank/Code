class Solution {
public:
    void dfs(int i, vector<vector<int>>& adjlist, vector<bool>& visited) {
        visited[i] = true;

        for (auto it : adjlist[i]) {
            if (!visited[it]) {
                dfs(it, adjlist, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int size = isConnected.size();

        vector<vector<int>> adjlist(size + 1);
        vector<bool> visited(size + 1, false);

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjlist[i + 1].push_back(j + 1);
                }
            }
        }

        for (int i = 1; i <= size; i++) {
            if (!visited[i]) {
                ans++;
                dfs(i, adjlist, visited);
            }
        }

        return ans;
    }
};