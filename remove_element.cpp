#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=nums.size();
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }

        }
        return j;
    }
};

int main(){
    Solution ob;
    vector<int> v={3,2,3,5,34};
    cout<<ob.removeElement(v,3);
    return 0;
}