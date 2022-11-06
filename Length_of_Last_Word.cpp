#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {   
        int last = s.size() - 1;
  while (last >= 0 && s[last] == ' ')
    --last;
  s=s.substr(0, last + 1)+" ";
      

        string w = "";
        string lw="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]))
            w=w+s[i];
            else{
                lw=w;
                w="";
            }
        }
     return lw.length();
    }
};

int main()
{
    Solution ob;
    cout << ob.lengthOfLastWord("fly me to the   moon   ");
    return 0;
}