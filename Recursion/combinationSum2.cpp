// TC -> O(2^n * k)
// SC -> O(k*x)
void f(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
        {
            continue;
        }
        if (arr[i] > target)
            break;

        ds.push_back(arr[i]);
        f(i + 1, target - arr[i], arr, ds, ans);
        ds.pop_back();
    }
}

// Returns all unique combinations and each number in candidates can only be used once
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(candidates.begin(), candidates.end());
    f(0, target, candidates, ds, ans);
    return ans;
}
