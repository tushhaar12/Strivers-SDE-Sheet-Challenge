#include <bits/stdc++.h>

using namespace std;

// TYPE-1 : Draw triangle upto n rows
/// TC -> O(N^2)
// SC -> O(N^2)
void pascalsTriangle(int numRows)
{
    vector<vector<int>> ans(numRows);

    for (int i = 0; i < numRows; i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

// TYPE-2 : Given row = r and col = c , find element at that position
// TC -> O(N)
// SC-> O(1)

// Use formula : r-1 C c-1 (Combination formula)

// TYPE-3 : Print nth row
//  TC -> O(N)
//  SC -> O(N)

int main()
{
    int numRows = 5;
    pascalsTriangle(numRows);
    cout << "\n";
    return 0;
}
