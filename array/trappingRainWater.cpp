// TC -> O(N) + O(N) + O(N)
// SC -> O(N) + O(N)

int trap(vector<int> &height)
{
    int n = height.size();
    int pref[n], suff[n];
    pref[0] = height[0];
    suff[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++)
        pref[i] = max(pref[i - 1], height[i]);
    for (int i = n - 2; i >= 0; i--)
        suff[i] = max(pref[i + 1], height[i]);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int lmax = suff[i], rmax = pref[i];
        ans += min(lmax, rmax) - height[i];
    }
    return ans;
}
