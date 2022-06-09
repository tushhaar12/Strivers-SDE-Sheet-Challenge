#include <bits/stdc++.h>

using namespace std;

// TC -> O(N)
// SC -> O(1)
vector<int> mandr(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int sumOfSquares = (n * (n + 1) * (2 * n + 1)) / 6;
    int m = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
        sumOfSquares -= (nums[i] * nums[i]);
    }
    vector<int> ans;
    m = (sum + sumOfSquares / sum) / 2;
    r = m - sum;
    ans.push_back(m);
    ans.push_back(r);
    return ans;
}

int main()
{
    vector<int> v = {2, 5, 3, 4, 5};
    vector<int> ans = mandr(v);
    cout << "Missing number : " << ans[0];
    cout << "\nRepeating number : " << ans[1];
    ;
    return 0;
}
