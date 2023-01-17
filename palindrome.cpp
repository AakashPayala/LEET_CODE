class Solution {
public:
    bool isPalindrome(int x) {

          if(x==0){
            return true;
        }
        if(x<0||x%10==0){
            return false;
        }
     
        else{
            int r=0,no=x;
            while(no>r){
                r=r*10+(no%10);
                no=no/10;
            }
            if(no==r||no==r/10){
                return true;
            }
            else{
                return false;
            }
        }
        
       
    }
};