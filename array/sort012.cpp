#include <bits/stdc++.h>

using namespace std;

/*  ALGO

All mid conditions :

1. mid = 0 -> swap(a[low++] ,a[mid++])
2. mid = 1 -> mid++
3. mid = 2 -> swap(a[mid] ,a[high--])

*/

// TC -> O(N)
// SC -> O(1)
void sortColors(vector<int> &nums)
{
    // sort(nums.begin() ,nums.end());
    int lo = 0, mid = 0, hi = nums.size() - 1;

    while (mid <= hi)
    {
        if (nums[mid] == 0)
        {
            swap(nums[lo++], nums[mid++]);
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[hi--]);
        }
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (auto i : nums)
        cout << i << " ";
    return 0;
}
