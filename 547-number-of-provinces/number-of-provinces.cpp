class Solution {
public:

    void dfs(int node, vector<vector<int>>& adjList, vector<int>& vis) {
        vis[node] = 1;

        for (auto it : adjList[node]) {
            if (!vis[it]) {
                dfs(it, adjList, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adj) {
        int v = adj.size();

        
        vector<vector<int>> adjList(v);

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                }
            }
        }

        
        vector<int> vis(v, 0);

        int cnt = 0;

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adjList, vis);
            }
        }

        return cnt;
    }
};