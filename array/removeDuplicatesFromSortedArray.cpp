// TC -> O(N)
// SC -> O(1)

int removDups(vector<int> &nums)
{
    int n = nums.size();
    if (!n)
        return 0;
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    // Length of new array after removing duplicates
    return (i + 1);
}
