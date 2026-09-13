class Solution {
public:
    void dfs(vector<vector<int>>& image, int row, int column, int originalColor,
             int color) {

        int m = image.size();
        int n = image[0].size();

        image[row][column] = color;

        if (row - 1 >= 0 && image[row - 1][column] == originalColor) {

            dfs(image, row - 1, column, originalColor, color);
        }
        if (row + 1 < m && image[row + 1][column] == originalColor) {

            dfs(image, row + 1, column, originalColor, color);
        }
        if (column - 1 >= 0 && image[row][column - 1] == originalColor) {

            dfs(image, row, column - 1, originalColor, color);
        }
        if (column + 1 < n && image[row][column + 1] == originalColor) {

            dfs(image, row, column + 1, originalColor, color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int originalColor = image[sr][sc];
        if (originalColor == color)
            return image;

        dfs(image, sr, sc, originalColor, color);

        return image;
    }
};