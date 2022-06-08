#include <bits/stdc++.h>

using namespace std;

int majEle(vector<int> &nums)
{
    // Moore's voting algo
    int cnt = 0, ele = 0;
    for (int i : nums)
    {
        if (cnt == 0)
            ele = i;
        if (ele == i)
            cnt++;
        else
            cnt--;
    }
    return ele;
}

int main()
{
    vector<int> nums = {3, 4, 4, 3, 3, 2, 3};
    cout << majEle(nums);
    return 0;
}
