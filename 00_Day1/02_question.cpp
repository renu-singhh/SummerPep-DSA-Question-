                    // search in the 2D matrix...
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output : true
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0;
    int right = rows * cols - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int element = matrix[mid / cols][mid % cols];

        if (element == target)
        {
            return true;
        }
        if (element < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter target value: ";
    cin >> target;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements row by row:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    if (searchMatrix(matrix, target))
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }

    return 0;
}
