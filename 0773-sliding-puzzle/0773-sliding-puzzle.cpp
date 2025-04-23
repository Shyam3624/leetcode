class Solution {
public:
    // Generate a string representation of the board
    string generateString(vector<vector<int>>& board) {
        string str = "";
        for(int i=0; i<2; i++) {
            for(int j=0; j<3; j++) {
               str.push_back(board[i][j] + '0');
            }
        }
        return str;
    }
    
    // Check if the coordinates are within bounds
    bool isValidCoordicate(int &i, int &j) {
        return (i >= 0 && i < 2 && j >= 0 && j<3);
    }

    // Recursive DFS function with backtracking
    int backTrack(vector<vector<int>>& board, int count, int i, int j, unordered_map<string, int> &umap) {
        string generatedString = generateString(board);
        
        // Base case: if the current configuration matches the target
        if(generatedString == "123450") return count;
        
        // Prune if this configuration has been reached with fewer or equal moves
        if(umap.find(generatedString) != umap.end()) {
            if(umap[generatedString] <= count)
                return 1e+9;
            umap[generatedString] = count;
        }
        umap[generatedString] = count;
        
        // Possible directions to move the empty space
        vector<pair<int, int>> dirs = {
            {0, 1}, {0, -1},
            {-1, 0}, {1, 0}
        };

        int ans = 1e+9;
        for(auto &e: dirs) {
            int x = i + e.first;
            int y = j + e.second;
            if(isValidCoordicate(x, y)) {
                swap(board[i][j], board[x][y]);
                ans = min(ans, backTrack(board, count + 1, x, y, umap));
                swap(board[i][j], board[x][y]);
            }
        }
        return ans;
    }

    // Main function to solve the sliding puzzle
    int slidingPuzzle(vector<vector<int>>& board) {
        int x, y;

        // Find the position of the empty space (0)
        for(int i=0; i<2; i++) {
            for(int j=0; j<3; j++) {
                if(board[i][j] == 0) {
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        
        unordered_map<string, int> umap;
        int ans = backTrack(board, 0, x, y, umap);
        if(ans >= 1e+9) return -1;
        return ans;
    }
};