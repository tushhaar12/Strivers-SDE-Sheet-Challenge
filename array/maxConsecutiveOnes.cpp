// TC -> O(N)
// SC -> O(1)

int maxConsOnes(vector<int> &nums)
{
    int n = nums.size();
    if (!n)
        return 0;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
            cnt++;
        else
            cnt = 0;
        ans = max(ans, cnt);
    }
    return ans;
}
