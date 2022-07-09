vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    vector<int> ans;

    unordered_map<int, int> mpp;
    for (auto i : arr)
        mpp[i]++;

    priority_queue<pair<int, int>> pq;
    for (auto i : mpp)
    {
        pq.push({i.second, i.first});
    }

    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
