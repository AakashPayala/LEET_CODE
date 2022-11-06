#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>& nums) {
        // vector<string>s;
        int c=0;
    //     for(int i=0;i<nums.size();i++){
    //     s.push_back(to_string(nums[i])); 
    // }
    for(int i=0;i<nums.size();i++){
        int k=i;
        while(nums[i]==nums[k+1]){
            nums[k+1]=NULL;
            k++;
        }
    



    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
        if(nums[i]!=NULL)
        c++;
    }

    cout<<endl<<c;
    }
};


int main(){
    Solution ob;
    vector<int> n={1,1,2,4,4,4};
    ob.removeDuplicates(n);
    return 0;
}