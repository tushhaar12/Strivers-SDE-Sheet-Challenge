string reverseString(string str)
{
    // Write your code here.
    vector<string> v;
    int st = 0, cnt = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            cnt = 0;
            while (str[i] != ' ')
            {
                cnt++;
                i++;
            }
            v.push_back(str.substr(st, cnt));
        }
    }

    string s;
    for (int i = v.size() - 1; i > = 0; i--)
    {
        s.append(v[i]);
        s.append(" ");
    }
}
