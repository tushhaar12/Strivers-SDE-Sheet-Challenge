vector<int> minHeap(int n, vector<vector<int>> &q)
{
    vector<int> ans;
    multiset<int> st;
    for (auto i : q)
    {
        if (i[0] == 1)
        {
            auto it = st.begin();
            ans.push_back(*it);
            st.erase(it);
        }
        else
        {
            st.insert(i[1]);
        }
    }
    return ans;
}
