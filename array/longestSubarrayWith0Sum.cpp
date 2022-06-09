#include <bits/stdc++.h>

using namespace std;

// TC -> O(N)
// SC -> O(N)
int maxlen(vector<int> &nums)
{
    unordered_map<int, int> mpp;
    int maxi = 0, sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1, 3, -1, 4, -4};
    cout << maxlen(nums);
    return 0;
}
