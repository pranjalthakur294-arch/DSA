class Solution {
public:
void dfs(vector<vector<char>>& grid,int a,int b){
        grid[a][b]='0';
           int m=grid.size();
        int n=grid[0].size();
        if(a-1>=0 && grid[a-1][b]=='1'){
            dfs(grid,a-1,b);
        }
        if(a+1<m && grid[a+1][b]=='1'){
            dfs(grid,a+1,b);
        }
        if(b-1>=0 && grid[a][b-1]=='1'){
            dfs(grid,a,b-1);
        }
        if(b+1<n && grid[a][b+1]=='1'){
            dfs(grid,a,b+1);
        }
        
       }
    int numIslands(vector<vector<char>>& grid) {
        int island=0;
     int m = grid.size();
int n = grid[0].size();

        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    island++;
                     dfs(grid,i,j);
       }
            }
        }
       return island;
    }
};