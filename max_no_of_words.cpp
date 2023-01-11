class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int m = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            sentences[i] = sentences[i] + " ";
            string w = "";
            int c = 0;
            string s = sentences[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == ' ')
                {
                    c++;
                }
            }
            if (c > m)
            {
                m = c;
            }
        }

        return m;
    }
};