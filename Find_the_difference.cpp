class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int s1 = 0, s2 = 0;
        for (int i = 0; i < t.length(); i++)
        {
            s1 += (int)t[i];
        }
        for (int i = 0; i < s.length(); i++)
        {
            s2 += (int)s[i];
        }

        return ((char)(s1 - s2));
        // return 0;
    }
};