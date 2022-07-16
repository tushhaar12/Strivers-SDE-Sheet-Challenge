// TC -> O(N)
// SC -> O(N)
bool isValidParenthesis(string s)
{
    int n = s.size();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            else
            {
                char c = st.top();
                st.pop();
                if (s[i] == ')' && c == '(')
                    continue;
                if (s[i] == '}' && c == '{')
                    continue;
                if (s[i] == ']' && c == '[')
                    continue;
                else
                    return false;
            }
        }
    }
    if (st.empty())
        return true;
    return false;
}
