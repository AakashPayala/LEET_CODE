class Solution {
public:
    int commonFactors(int a, int b) {
        map<int,int>m;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                m[i]=m[i]+1;
            }
        }
        
        for(int i=1;i<=b;i++){
            if(b%i==0){
                m[i]=m[i]+1;
            }
        }

        int c=0;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if((*it).second==2){
                c++;
            }
            // cout<<(*it).first<<"-> "<<(*it).second<<endl;
        }
        // cout<<c;
        return c;
    }
};