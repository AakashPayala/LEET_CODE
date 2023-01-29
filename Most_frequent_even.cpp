class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
           map<int,int> m;
           int even=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
            m[nums[i]]+=1;
            even++;
            }
           
        }
        if(even==0){
            return -1;
        }


                map<int,int>::iterator it;
        int largest=0,element;
        for(it=m.begin();it!=m.end();it++){
            // cout<<(*it).first<<" - >"<<(*it).second<<endl;
            if((*it).second>largest){
                largest=(*it).second;
                element=(*it).first;
            }

            // cout<<largest<<" --- "<<element<<endl;
        }
    return element;
    
}
};


