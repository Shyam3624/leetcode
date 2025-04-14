class Solution {
public:
int aliveOrDead(vector<vector<int>> &board, int re, int ce, int x, int y){
        int sum = 0,i,j;
        i = (x-1<0)?0:x-1;
        j = (y-1<0)?0:y-1;
        while(i<=x+1 && i>=0 && i<re){
            j=(y-1<0)?0:y-1;
            for(;j<=y+1 && j>=0 && j<ce;j++){
                if(x==i && y==j) continue;
                sum+=board[i][j]%2;
            }
            i++;
        }
        
        if(board[x][y]==0 && sum==3){
            return 2;
        }else if(board[x][y]==1 && (sum>3 || sum<2)){
            return 3;
        }else{
            return board[x][y];
        }
            
            
    }
    void gameOfLife(vector<vector<int>>& board) {
        if(board.size()==0) return;
        int nr,nc;
        nr = board.size();
        nc = board[0].size();
        
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                board[i][j] = aliveOrDead(board, nr, nc, i, j);
            }
        }
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(board[i][j]==3 || board[i][j]==2)
                board[i][j] = (board[i][j]+1)%2;
            }
        }

    }
};