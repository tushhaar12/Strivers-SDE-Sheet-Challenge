// TC -> O(V)
// SC -> O(1)

int minCoins(int amt)
{
    int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = 9;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (amt >= deno[i])
        {
            amt -= deno[i];
            ans++;
        }
    }
    return ans;
}
