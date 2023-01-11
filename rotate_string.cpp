class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        else if(s.length()!=goal.length()){
            return false;

        }
        string w=goal;
        for(int i=0;i<s.length();i++){
            w=w.substr(1)+w[0];
            if(w==s){
                return true;
                break;
            }
        }

        return false;
    }
};