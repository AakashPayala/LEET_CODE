class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){
            if((int)pow(2,i)==n){
                return true;
            }
        }
        return false;
    }
};