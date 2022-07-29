// TC -> O(M*N)
// SC -> O(1)
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans = "";

    for (int i = 0; i < arr[0].size(); i++)
    {
        char ch = arr[0][i];

        bool match = true;

        for (int j = 1; j < n; j++)
        {
            if (arr[j].size() < i || ch != arr[j][i])
            {
                match = false;
                break;
            }
        }
        if (!match)
            break;
        else
            ans.push_back(ch);
    }
    return ans;
}
