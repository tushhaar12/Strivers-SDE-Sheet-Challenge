struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

static bool comp(Job a, Job b)
{
    if (a.profit > b.profit)
        return true;
    return false;
}

// Returns number of jobs and profit
// TC -> O(N*logN) + O(N*M)
// SC -> O(M) (M is maximum deadline)
vector<int> jobSeq(Job arr[], int n)
{
    vector<int> ans;
    sort(arr, arr + n, comp);

    int maxi = arr[0].dead;
    for (int i = 1; i < n; i++)
        maxi = max(maxi, arr[i].dead);

    int slot[maxi + 1];
    for (int i = 1; i <= maxi; i++)
        slot[i] = -1;

    int jobCount = 0, jobProfit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = i;
                jobCount += 1;
                jobProfit += arr[i].profit;
                break;
            }
        }
    }
    ans.push_back(jobCount);
    ans.push_back(jobProfit);
    return ans;
}
