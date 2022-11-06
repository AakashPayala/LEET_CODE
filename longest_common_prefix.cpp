#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string prefix="";
    int l=strs.size(),a=0,f=0;
    string s=strs[0];
    int ls=s.size();
    for(int i=0;i<ls;i++){
        for(int j=1;j<l;j++){
            string s1=strs[j];
            if(s[i]==s1[a])
                continue;
            else{
                f=1;
                break;
            }

        }
        if(f==0)
        prefix=prefix+s[i];
        a++;
    }
    return prefix;
        
    }
};
int main(){
 vector<string> s={"flower"};
 Solution ob;
 cout<<ob.longestCommonPrefix(s);
 return 0;
}