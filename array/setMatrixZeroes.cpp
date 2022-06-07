#include <bits/stdc++.h>

using namespace std;

// BRUTE FORCE:
//  TC -> (N*M) * (N + M)
//  SC -> O(1) As we are doing changes in given array.
void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                // Top part
                int ind = i - 1;
                while (ind >= 0)
                {
                    if (matrix[ind][j] != 0)
                    {
                        matrix[ind][j] = -1;
                    }
                    ind--;
                }

                // Down part
                ind = i + 1;
                while (ind < rows)
                {
                    if (matrix[ind][j] != 0)
                    {
                        matrix[ind][j] = -1;
                    }
                    ind++;
                }

                // Left Part
                ind = j - 1;
                while (ind >= 0)
                {
                    if (matrix[i][ind] != 0)
                    {
                        matrix[i][ind] = -1;
                    }
                    ind--;
                }

                // Right part
                ind = j + 1;
                while (ind < cols)
                {
                    if (matrix[i][ind] != 0)
                    {
                        matrix[i][ind] = -1;
                    }
                    ind++;
                }
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] <= 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// BETTER
// TC -> O(N*M + N*M)
// SC -> O(N) + O(M)
void setZeroes2(vector<vector<int>> &matrix)
{
    int rows = matrix.size(), cols = matrix[0].size();
    vector<int> dummy1(rows, -1), dummy2(cols, -1);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                dummy1[i] = 0;
                dummy2[j] = 0;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (dummy1[i] == 0 || dummy2[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// OPTIMIZED
// TC ->2*(N * M)
// SC -> o(1)
void setZeroes3(vector<vector<int>> &matrix)
{
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
        }
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        if (col0 == 0)
            matrix[i][0] = 0;
    }
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes3(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
