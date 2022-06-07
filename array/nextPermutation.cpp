#include <bits/stdc++.h>

using namespace std;

/* ALGO

1. a[i] < a[i + 1] ind1
2. a[ind2] > a[ind1] ind2
3. swap(a[ind1] ma[ind2])
4.reverse(ind1 + 1, till size of array)


 */
// We can use inbuilt ,ethoad also : next_permutation();
// TC -> O(N)
// SC -> O(1)
void nextPermutation(vector<int> &nums)
{
    int n = nums.size(), ind1, ind2;

    for (ind1 = n - 2; ind1 >= 0; ind1--)
    {
        if (nums[ind1] < nums[ind1 + 1])
            break;
    }

    if (ind1 < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (ind2 = n - 1; ind2 > ind1; ind2--)
        {
            if (nums[ind2] > nums[ind1])
                break;
        }
        swap(nums[ind1], nums[ind2]);
        reverse(nums.begin() + ind1 + 1, nums.end());
    }
}

int main()
{
    vector<int> nums = {1, 3, 5, 4, 2};
    nextPermutation(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
