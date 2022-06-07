#include <bits/stdc++.h>

using namespace std;

// TC -> O(N)
// SC -> O(1)

int findDuplicate(vector<int> &nums)
{
    int fast = nums[0], slow = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (fast != slow);

    fast = nums[0];
    while (fast != slow)
    {
        fast = nums[fast];
        slow = nums[slow];
    }
    return fast;
}

int main()

{
    vector<int> v = {1, 2, 3, 3, 4, 5};
    int ans = findDuplicate(v);
    cout << ans;
    return 0;
}
