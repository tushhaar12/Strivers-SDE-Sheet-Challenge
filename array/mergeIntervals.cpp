#include <bits/stdc++.h>

using namespace std;

// TC -> O(nLOGN) + O(N)
// SC -> O(N)
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;

    if (intervals.size() == 0)
    {
        return ans;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempInterval[1])
        {
            tempInterval[1] = max(it[1], tempInterval[1]);
        }
        else
        {
            ans.push_back(tempInterval);
            tempInterval = it;
        }
    }
    ans.push_back(tempInterval);
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans;
    ans = merge(v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
