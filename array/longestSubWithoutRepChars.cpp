#include <bits/stdc++.h>

using namespace std;

int longestSub(string s)
{
    int n = s.size();
    int left = 0, right = 0, len = 0;
    vector<int> mpp(256, -1);

    while (right < n)
    {
        if (mpp[s[right]] != -1)
        {
            left = max(left, mpp[s[right]] + 1);
        }
        mpp[s[right]] = right;
        len = max(len, right - left + 1);
        right++;
    }
    return len;
}

int main()
{
    string s = "abcabcbb";
    cout << longestSub(s);
    return 0;
}
