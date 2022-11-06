#include<bits/stdc++.h>
using namespace std;
class Remove{
    public:
void remove_element(string s, string t){
    s=s+" ";
    string w="";
    vector<string> str;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ')
            w=w+s[i];
        else{
            if(w!=t){
            str.push_back(w);
            }
            w="";
        }

    }
 

    // for(int i=0;i<str.size();i++){
    //     if(str[i]==t)
    //     str[i]="";
    //     else{
    //         continue;
    //     }
    // }
    cout<<"new string : \n";
    for(int i=0;i<str.size();i++){
        cout<<str[i]+" ";
    }


}
};

int main(){
    Remove ob;
    ob.remove_element("i like cake","like");
    return 0;
}