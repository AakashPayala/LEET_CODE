class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> m1;
        map<char, int> m2;
        int c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            m1[s[i]] += s[i];
        }
        c = 0;
        for (int j = 0; j < t.length(); j++)
        {
            m2[t[j]] += t[j];
        }

        // map<char,int>:: iterator it4;
        // for(it4=m1.begin();it4!=m1.end();it4++){
        //     cout<<(*it4).first<<" -> "<<(*it4).second<<endl;
        // }

        // cout<<"------------------------------------------------\n";

        //     map<char,int>:: iterator it3;
        // for(it3=m2.begin();it3!=m2.end();it3++){
        //     cout<<(*it3).first<<" -> "<<(*it3).second<<endl;
        // }
        if (m1 == m2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};