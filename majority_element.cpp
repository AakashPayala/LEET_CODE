class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        map<int,int>::iterator it;
        int largest=0,element;
        for(it=m.begin();it!=m.end();it++){
            // cout<<(*it).first<<" - >"<<(*it).second<<endl;
            if((*it).second>largest){
                largest=(*it).second;
                element=(*it).first;
            }

        }

        // cout<<largest<<" --- "<<element<<endl;
        return element;
        
    }
};
