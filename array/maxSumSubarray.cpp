#include <bits/stdc++.h>

using namespace std;

// TC -> O(N)
// SC -> O(1)
int maxSubarray(vector<int> &nums)
{
    int sum = 0, maxi = nums[0];
    for (auto i : nums)
    {
        sum += i;
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxSubarray(nums);
    cout << ans;
    return 0;
}
