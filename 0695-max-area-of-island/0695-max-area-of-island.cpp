class Solution {
public:
   int dfs(vector<vector<int>>& grid ,int a,int b ){
         int m=grid.size();
        int n=grid[0].size();
        if(a<0 || a>=m || b<0 || b>=n){
            return 0;
        }
        if(grid[a][b]==0) return 0;
        
        grid[a][b]=0;
        int area=1;

        if(a-1>=0 && grid[a-1][b]==1){
            
            area+=dfs(grid,a-1,b);
        }
         if(a+1<m && grid[a+1][b]==1){
            
            area+=dfs(grid,a+1,b);
        }
         if(b-1>=0 && grid[a][b-1]==1){
            
            area+=dfs(grid,a,b-1);
        }
         if(b+1<n && grid[a][b+1]==1){
            
            area+=dfs(grid,a,b+1);
        }
        
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int m=grid.size();
        int n=grid[0].size();
        int area = 0;
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
            area=max(area,dfs(grid,i,j));
        }
        }
        return area;
    }
};

 