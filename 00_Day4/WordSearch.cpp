#include <bits/stdc++.h>
using namespace std;

bool ispresent(vector<vector<char>> &board, string &word, int i, int j, int index)
{
    if (index == word.length())
        return true;
    // checking the boundaries of the grid
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index])
    {
        return false;
    }
    // marking the cell as visited
    char temp = board[i][j];
    board[i][j] = '#';
    // explore all the possible 4 directions
    bool found = ispresent(board, word, i + 1, j, index + 1) ||
                 ispresent(board, word, i - 1, j, index + 1) ||
                 ispresent(board, word, i, j + 1, index + 1) ||
                 ispresent(board, word, i, j - 1, index + 1);
    // backtrack and unmark the cell as visited
    board[i][j] = temp;
    return found;
}

bool exists(vector<vector<char>> &board, string word)
{
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == word[0])
            {
                if (ispresent(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};

    string word1 = "ABCCED";
    cout << "Word \"" << word1 << "\" exists in board: " << (exists(board, word1) ? "true" : "false") << endl;

    return 0;
}
