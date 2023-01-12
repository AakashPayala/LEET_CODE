class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb=nums[0];
        int ub=nums.size()-1;
        // int f=-1;
        if(nums.size()==1&&nums[0]==target){
            return 0;
        }
        else if(nums.size()==2)
        {
            if(nums[0]==target){
                return 0;
            }
            else if(nums[1]==target){
                return 1;
            }
        }
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                lb=mid+1;
            }
            else if(nums[mid]>target){
                ub=mid-1;
            }
        }
        return -1;

      
    }
};