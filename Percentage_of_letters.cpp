class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==letter){
                c++;
            }

        }
        return floor((c*100)/s.length());

        
    }
};