class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        queue<pair<int,int>> q;
        q.push({sr,sc});

        int m=image.size();
        int n= image[0].size();

        int originalColor=image[sr][sc];
        image[sr][sc]=color;

        if (originalColor==color) return image;
        while(!q.empty()){
            int row=q.front().first;
        int column=q.front().second;
        q.pop();

        if(row-1>=0 && image[row-1][column]==originalColor){
            image[row-1][column]=color;
            q.push({row-1,column});   
        }
        if(row+1<m && image[row+1][column]==originalColor){
            image[row+1][column]=color;
            q.push({row+1,column});
        }
         if(column-1>=0 && image[row][column-1]==originalColor){
            image[row][column-1]=color;
            q.push({row,column-1});
        }
         if(column+1<n && image[row][column+1]==originalColor){
            image[row][column+1]=color;
            q.push({row,column+1});
        }

        }
        return image;
    }
};