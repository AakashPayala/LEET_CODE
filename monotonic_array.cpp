class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int f1=0,f2=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]<=a[i+1]){
                continue;
            }
            else{
                f1=1;
            }
        }
        if(f1==0){
            return true;
        }
          for(int i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
                continue;
            }
            else{
                f2=1;
            }
        }
        if(f2==0){
            return true;
        }

        return false;

        }
};