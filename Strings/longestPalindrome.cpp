string longestPalindrome(string s)
{
    int max_length = 1;
    int st = 0;
    int end = 0;
    // odd case
    for (int i = 0; i < s.length(); i++)
    {
        int l = i, r = i;
        while (l >= 0 && r < s.length())
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }

        int len = r - l - 1;
        if (len > max_length)
        {
            max_length = len;
            st = l + 1;
            end = r - 1;
        }
    }
    // even case
    for (int i = 0; i < s.length(); i++)
    {
        int l = i, r = i + 1;
        while (l >= 0 && r < s.length())
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }

        int len = r - l - 1;
        if (len > max_length)
        {
            max_length = len;
            st = l + 1;
            end = r - 1;
        }
    }
    return s.substr(st, max_length);
}
