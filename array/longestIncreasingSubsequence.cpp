#include <bits/stdc++.h>

using namespace std;

// TC -> O(3*N)
// SC -> O(N)
int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> hashSet;
    for (auto i : nums)
    {
        hashSet.insert(i);
    }
    int longest = 0;
    for (auto i : nums)
    {
        if (!hashSet.count(i - 1))
        {
            int currNum = i;
            int currStreak = 1;

            while (hashSet.count(currNum + 1))
            {
                currNum += 1;
                currStreak += 1;
            }
            longest = max(longest, currStreak);
        }
    }
    return longest;
}

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums);
    return 0;
}
