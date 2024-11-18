class Solution {
private:
    // Recursive function to compute unique paths to (i, j)
    int f(int i, int j, vector<vector<int>> &dp){
        // Base case: If at starting cell (0, 0), there's exactly 1 way
        if(i == 0 && j == 0) return 1;
        // If out of bounds, no valid path
        if(i < 0 || j < 0) return 0;

        // If already computed, return the stored result
        if(dp[i][j] != -1) return dp[i][j];

        // Recursive calls: count paths coming from above and left
        int up = f(i-1, j, dp);       // Paths from the cell above
        int left = f(i, j-1, dp);     // Paths from the cell to the left
        return dp[i][j] = up + left;  // Store result in dp and return
    }
public:
    int uniquePaths(int m, int n) {
        // Initialize dp table with -1
        vector<vector<int>> dp(m, vector<int>(n, -1));
        // Compute paths to (m-1, n-1)
        return f(m-1, n-1, dp);
    }
};
