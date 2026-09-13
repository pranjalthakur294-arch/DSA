class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        queue<int> q;
        int province = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                province++;
                q.push(i);

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (int neighbour = 0; neighbour < n; neighbour++) {
                        if (isConnected[node][neighbour] == 1 &&
                            !visited[neighbour]) {

                            visited[neighbour] = true;
                            q.push(neighbour);
                        }
                    }
                }
            }
        }
        return province;
    }
};