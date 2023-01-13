class Solution {
public:

    int check(string w){
        char arr[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
        int f1=0,f2=0,f3=0;
        for(int i=0;i<w.length();i++){
            for(int j=0;j<26;j++){
                if(w[i]==arr[j]&&(j>=0&&j<=9)){
                    f1=1;
                }
                  if(w[i]==arr[j]&&(j>=10&&j<=18)){
                    f2=1;
                }
                  if(w[i]==arr[j]&&(j>=19&&j<=25)){
                    f3=1;
                }
            }

        }
        if(f1==1&&f2==0&&f3==0){
            return 1;
        }
          if(f2==1&&f1==0&&f3==0){
            return 1;
        }
          if(f3==1&&f2==0&&f1==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            int k=check(words[i]);
            if(k==1){
                ans.push_back(words[i]);
            }
        }

        return ans;

    }
};