class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;

        visited[0]=true;
        q.push(0);

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto neighbour:rooms[node]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
    
    return true;
}
};