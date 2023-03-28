class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle){
            return 0;
        }
       int l1=haystack.length();
       int l2=needle.length();
       for(int i=0;i<(l1-l2)+1;i++){
           if(haystack.substr(i,l2)==needle){
            //    cout<<haystack.substr(i,l2+1)<<endl;
            return i;
           }
       }
       return -1;
    }
};
