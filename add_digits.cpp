class Solution {
public:
       int calculateSum(int n){
        int s=0;
        while(n>0){
            s=s+n%10;
            n/=10;
        }
        return s;
    }
    int addDigits(int num) {
        while(num>=10){
            num=calculateSum(num);
        }

        // cout<<num;
        return num;
    }
};