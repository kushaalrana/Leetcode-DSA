class Solution {
public:
    void dfs(int row, int col,  vector<vector<int>> &vis, vector<vector<char>> &board,int rDir[], int cDir[]){
     vis[row][col]=1;
     int n = board.size();
     int m = board[0].size();
     for(int i=0;i<4;i++){
         int nRow = row + rDir[i];
         int nCol = col + cDir[i];
         if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && board[nRow][nCol]=='O' && !vis[nRow][nCol]){
             dfs(nRow, nCol, vis, board, rDir, cDir);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int rDir[]={-1,0,1,0};
        int cDir[]={0,1,0,-1};
        
        //Mark all the boundary and Connecting O's as visited so that they do not change to X
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            //first row
            if(!vis[0][i] && board[0][i]=='O'){
                dfs(0,i,vis,board, rDir,cDir);
            }
            //last row
            if(!vis[n-1][i] && board[n-1][i]=='O'){
                dfs(n-1,i,vis,board, rDir,cDir);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0]&& board[i][0]=='O'){
                dfs(i,0,vis,board, rDir,cDir);
            }
            if(!vis[i][m-1]&& board[i][m-1]=='O'){
                dfs(i,m-1,vis,board, rDir,cDir);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X'; // At the End mark everyone as X
                }
            }
        }
    }
};