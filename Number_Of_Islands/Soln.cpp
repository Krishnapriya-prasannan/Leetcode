class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j) {
        // Check for out-of-bounds
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) {
            return;
        }

        // Return if it's water or already visited
        if (grid[i][j] == '2' || grid[i][j] == '0') {
            return;
        }

        // Mark current cell as visited
        grid[i][j] = '2';

        // Explore all 4 directions
        DFS(grid, i + 1, j);  // down
        DFS(grid, i, j + 1);  // right
        DFS(grid, i - 1, j);  // up
        DFS(grid, i, j - 1);  // left
    }

    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        // Traverse each cell in the grid
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                // If cell is land and not visited
                if (grid[i][j] == '1') {
                    DFS(grid, i, j);  // mark whole island
                    islands++;        // increment count
                }
            }
        }

        return islands;
    }
};
