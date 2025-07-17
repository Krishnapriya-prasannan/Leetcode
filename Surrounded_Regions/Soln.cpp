class Solution {
public:
    void DFS(vector<vector<char>>& board,int i,int j){
        if(i<0||i>=board.size()||j<0 ||j>=board[0].size()){
            return;
        }
        if(board[i][j]!='O'){
            return;
        }
        board[i][j]='S';
        DFS(board,i+1,j);
        DFS(board,i,j+1);
        DFS(board,i-1,j);
        DFS(board,i,j-1);

    }
    void solve(vector<vector<char>>& board) {
        int m,n,i,j;
        m=board.size();
        if(m==0){
            return;
        }
        n=board[0].size();

        for(i=0;i<m;i++){
            if(board[i][0]=='O') DFS(board,i,0);
            if(board[i][n-1]=='O') DFS(board,i,n-1);
        }
        for(i=0;i<n;i++){
            if(board[0][i]=='O') DFS(board,0,i);
            if(board[m-1][i]=='O') DFS(board,m-1,i);
        }
        for (i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='S'){
                    board[i][j]='O';
                }
            }
        }
        
    }
};
