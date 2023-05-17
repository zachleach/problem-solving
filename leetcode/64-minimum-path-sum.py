class Solution:
    def minPathSum(self, grid):
        x, y = len(grid[0]), len(grid)
        dp = [[0 for _ in range(x)] for _ in range(y)]

        dp[0][0] = grid[0][0]
        for i in range(1, y):
            dp[i][0] = grid[i][0] + dp[i-1][0]
        for j in range(1, x):
            dp[0][j] = grid[0][j] + dp[0][j-1]

        for i in range(1, y):
            for j in range(1, x):
                dp[i][j] = grid[i][j] + min(dp[i][j-1], dp[i-1][j])
        
        return dp[-1][-1]

