class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n, false);
        queue<int> q;
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        visited[source] = true;
        q.push(source);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            if (node == destination)
                return true;
            for (auto neighbour : graph[node]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }

        return false;
    }
};