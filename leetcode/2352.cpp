class Solution {
public:
    /*
        n rows and n columns, n < 200
        how many rows (left to right) and columns (top to bottom) are equal by value

        because n is small, you can brute force compare each row to each column

        for each row:
            for each column:
                counter += (row == column)
        
        return counter

    */
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> rows = grid;
        vector<vector<int>> cols(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cols[j][i] = grid[i][j];
            }
        }

        int ans = 0;
        for (vector<int> row: rows) {
            for (vector<int> col: cols) {
                ans += (row == col);
            }
        }

        return ans;
    }
};
