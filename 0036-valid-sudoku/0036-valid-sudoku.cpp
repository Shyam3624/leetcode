class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, bool> rowMap;
        map<char, bool> colMap;

        // Row and column check
        for (int i = 0; i < 9; i++) {
            rowMap.clear();
            colMap.clear();
            for (int j = 0; j < 9; j++) {
                // Row check
                if (board[i][j] != '.') {
                    if (rowMap[board[i][j]])
                        return false;
                    rowMap[board[i][j]] = true;
                }

                // Column check
                if (board[j][i] != '.') {
                    if (colMap[board[j][i]])
                        return false;
                    colMap[board[j][i]] = true;
                }
            }
        }

        // Sub-box check
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                map<char, bool> boxMap;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char current = board[boxRow + i][boxCol + j];
                        if (current != '.') {
                            if (boxMap[current])
                                return false;
                            boxMap[current] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};
