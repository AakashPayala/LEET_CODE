#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>str>>n;

    if(str.length()%n==0){
        cout<<(int)str.length()/n;
    }
    else{
        cout<<(int)str.length()/n+1;
    }

    return 0;
}