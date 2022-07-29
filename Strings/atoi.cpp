// TC -> O(N)
// SC -> O(1)
int atoi(string str)
{
    int s = 1;
    int i = 0, ans = 0;

    if (str[i] == '-')
    {
        s = -1;
        i++;
    }

    for (; i < str.size(); i++)
    {
        if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
        {
            ans = ans * 10 + (str[i] - '0');
        }
    }
    return (ans * s);
}
