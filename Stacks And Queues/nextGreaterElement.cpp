// Without Circular approach --> CodeStudio
// TC -> O(N + N)
// SC -> O(N)
vector<int> nextGreater(vector<int> &arr, int n)
{
    vector<int> nge(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        if (i < n)
        {
            if (!st.empty())
                nge[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nge;
}

// With Circular Approach --> LeetCode
// TC -> O(2N + 2N)
// SC -> O(N)
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= nums[i % n])
                st.pop();
            if (i < n)
            {
                if (!st.empty())
                {
                    nge[i % n] = st.top();
                }
                else
                {
                    nge[i % n] = -1;
                }
            }
            st.push(nums[i % n]);
        }
        return nge;
    }
};
