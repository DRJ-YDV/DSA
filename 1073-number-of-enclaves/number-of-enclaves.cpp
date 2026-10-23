class Solution {
public:
    void dfs(int row,int col,vector<vector<bool>>&vis,vector<vector<int>>& grid,int delrow[],int delcol[]){
        vis[row][col]=1;
        int m=grid.size();
        int n=grid[0].size();

        for(int i=0;i<4;i++){
            int nrow= row + delrow[i];
            int ncol= col + delcol[i];

            if(nrow>=0 && nrow<m && ncol >=0 && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid,delrow,delcol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        for(int i=0;i<n;i++){
            if(!vis[0][i] &&grid[0][i]==1){
                dfs(0,i,vis,grid,delrow,delcol);
            }
            if(!vis[m-1][i] &&grid[m-1][i]==1){
                dfs(m-1,i,vis,grid,delrow,delcol);
            }
        }
        for(int i=0;i<m;i++){
            if(!vis[i][0] &&grid[i][0]==1){
                dfs(i,0,vis,grid,delrow,delcol);
            }
            if(!vis[i][n-1] &&grid[i][n-1]==1){
                dfs(i,n-1,vis,grid,delrow,delcol);
            }
        }

        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};