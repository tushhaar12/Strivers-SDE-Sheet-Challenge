// We can't take same element again and again
void f(int i, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
    }
    if (i >= arr.size())
        return;

    for (; i < arr.size(); i++)
    {
        ds.push_back(arr[i]);
        f(i + 1, target - arr[i], arr, ds, ans);
        ds.pop_back();
    }
}

// We can choose same element again and again
// TC -> O(2^n * k)
// SC -> O(k * x)
void f(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
    }

    // Pick the element
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        f(ind, target - arr[ind], arr, ds, ans);
        ds.pop_back();
    }

    // Not Pick
    f(ind + 1, target, arr, ds, ans);
}

// For Generating uniques combinations whose numbers sum to target
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    f(0, target, candidates, ds, ans);
    return ans;
}
