// TC -> O(N)
// SC -> O(7)
int romanToInt(string s)
{
    // Write your code here
    map<char, int> mpp;
    mpp.insert(make_pair('I', 1));
    mpp.insert(make_pair('V', 5));
    mpp.insert(make_pair('X', 10));
    mpp.insert(make_pair('L', 50));
    mpp.insert(make_pair('C', 100));
    mpp.insert(make_pair('D', 500));
    mpp.insert(make_pair('M', 1000));

    int num, sum = 0;

    for (int i = 0; i < s.size();)
    {
        if (i == s.size() - 1 || (mpp[s[i]] >= mpp[s[i + 1]]))
        {
            num = mpp[s[i]];
            i++;
        }
        else
        {
            num = mpp[s[i + 1]] - mpp[s[i]];
            i += 2;
        }
        sum += num;
    }
    return sum;
}
