#include <bits/stdc++.h>

using namespace std;

// Recursion
// TC & SC -> Exponential
int f(int i, int j, int n, int m)
{
    if (i == (n - 1) && j == (m - 1))
        return 1;
    if (i >= n || j >= m)
        return 0;
    return f(i + 1, j, n, m) + f(i, j + 1, n, m);
}

// Converting into DP
// TC -> O(N*M)
// SC -> O(N*M)
int fdp(int i, int j, int n, int m, vector<vector<int>> &dp)
{
    if (i == n - 1 && j == m - 1)
        return 1;
    if (i >= n || j >= m)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = fdp(i + 1, j, n, m, dp) + fdp(i, j + 1, n, m, dp);
}

// int uniquePaths(int n, int m)
// {
//     // vector<vector<int>> dp(n, m);
//     // return fdp(0, 0, n, m, dp);
// }

// MOST OPTIMAL
int uniquePathss(int n, int m)
{
    // vector<vector<int>> dp(n, m);
    int N = n + m - 2;
    int r = m - 1;
    double res = 1;

    for (int i = 1; i <= r; i++)
        res = res * (N - r + i) / i;
    return (int)res;
}

int main()
{
    cout << uniquePathss(3, 7);
    return 0;
}
