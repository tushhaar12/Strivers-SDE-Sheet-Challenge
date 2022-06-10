#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A, int B)
{
    map<int, int> freq;
    int cnt = 0;
    int xorr = 0;
    for (auto i : A)
    {
        xorr ^= i;
        if (xorr == B)
        {
            cnt += 1;
        }

        if (freq.find(xorr ^ B) != freq.end())
        {
            cnt += freq[xorr ^ B];
        }
        freq[xorr] += 1;
    }

    return cnt;
}

int main()
{
    vector<int> A = {4, 2, 2, 6, 4};
    cout << solve(A, 6);
    return 0;
}
