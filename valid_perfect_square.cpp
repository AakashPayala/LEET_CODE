class Solution {
public:
    bool isPerfectSquare(int num) {
        long i;
        for(i=0;i<num;i++){
            if(i*i>=num)
                break;
        }
        
        if(i*i==num){
            return true;
        }
        else{
            return false;
        }
    }
};


