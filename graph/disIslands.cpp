#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int row, int col, int bRow, int bCol, vector<pair<int,int>> &v, 
        vector<vector<int>> &vis, vector<vector<int>>  &grid) {
            int n = grid.size(), m = grid[0].size();
            vis[row][col] = 1;
            v.push_back({row - bRow, col - bCol});
            vector<int>delRow{-1, 0, 1, 0};
            vector<int>delCol{0, 1, 0, -1};
            for(int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];
                if(nRow >= 0 && nRow < n && nCol >=0 && nCol < m && 
                !vis[nRow][nCol] && grid[nRow][nCol] == 1) {
                    dfs(nRow, nCol, bRow, bCol, v, vis, grid);
                }
             }
        } 
    public:
        int countDistinctIslands(vector<vector<int>>& grid) {
            // code here
            int n = grid.size(), m = grid[0].size();  
            set<vector<pair<int,int>>>res;
            vector<vector<int>>vis(n, vector<int>(m,0));
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(!vis[i][j] && grid[i][j] == 1) {
                        // vis[i][j] = 1;
                        vector<pair<int,int>>v;
                        dfs(i, j, i, j, v, vis, grid);
                        res.insert(v);
                    }
                }
            }
            return res.size();
        }
};
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}

