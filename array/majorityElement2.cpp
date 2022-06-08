#include <bits/stdc++.h>

using namespace std;

vector<int> majoELe(vector<int> &nums)
{
    vector<int> ans;
    int num1 = -1, num2 = -1, cnt1 = 0, cnt2 = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == num1)
            cnt1++;
        else if (nums[i] == num2)
            cnt2++;
        else if (cnt1 == 0)
        {
            num1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            num2 = nums[i];
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = cnt2 = 0;
    for (auto i : nums)
    {
        if (i == num1)
            cnt1++;
        else if (i == num2)
            cnt2++;
    }
    if (cnt1 > n / 3)
        ans.push_back(num1);
    if (cnt2 > n / 3)
        ans.push_back(num2);
    return ans;
}

int main()
{
    vector<int> nums = {3, 3, 3, 1};
    // cout << majEle(nums);
    vector<int> ans = majoELe(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
