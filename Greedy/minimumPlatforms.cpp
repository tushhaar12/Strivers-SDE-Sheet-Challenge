// TC -> O(N)
// SC -> O(1)

int calculateMinPatforms(int arr[], int dep[], int n)

{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int ans = 1, platform = 1;
    int i = 1, j = 0;

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            platform++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            platform--;
            j++;
        }
        if (platform > ans)
            ans = platform;
    }
    return ans;
}
