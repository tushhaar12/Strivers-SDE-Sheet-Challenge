double multiply(double mid, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
        ans *= mid;
    return ans;
}

// TC -> O(N*log(M*10^d))
// SC -> O(1)
double getNthRoot(int n, int m)
{
    double low = 1;
    double high = m;
    double eps = 1e-7;

    while ((high - low) > eps)
    {
        double mid = (high + low) / 2;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}
