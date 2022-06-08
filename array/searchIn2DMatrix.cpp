#include <bits/stdc++.h>

using namespace std;

// GFG -> Row wise and column wise sorted!
void findElem(vector<vector<int>> &mat, int x)
{
    int n = mat.size();
    int i = 0, j = mat[0].size();
    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << i << " " << j; // Indices where it's present!
            return;
        }
        if (mat[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

// LeetCode -> Row wise sorted!
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (!matrix.size())
        return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int lo = 0, hi = n * m - 1;
    while (lo <= hi)
    {
        int mid = (lo + (hi - lo) / 2);

        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }
        if (matrix[mid / m][mid % m] > target)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return false;
}

int main()
{

    return 0;
}
