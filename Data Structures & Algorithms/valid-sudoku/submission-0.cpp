class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char n) {
        if (n == '.') return true; // skip empty cells

        // Horizontal
        for (int i = 0; i < 9; i++) {
            if (i != col && board[row][i] == n) return false;
        }

        // Vertical
        for (int i = 0; i < 9; i++) {
            if (i != row && board[i][col] == n) return false;
        }

        // 3x3 box
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (!(i == row && j == col) && board[i][j] == n) return false;
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (!isSafe(board, i, j, board[i][j])) return false;
            }
        }
        return true;
    }
};
