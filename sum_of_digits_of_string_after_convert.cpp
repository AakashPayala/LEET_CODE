class Solution {
public:

    int calculateSum(int n){
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    
    int getLucky(string s, int k) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            // cout<<(s[i]-96)<<"-"<<calculateSum(s[i]-96)<<endl;

            sum=sum+calculateSum(s[i]-96);
        }
        k=k-1;
        // cout<<sum<<"-----\n";
        while(k-->0){
            sum=calculateSum(sum);
        }
        // cout<<sum<<"------\n";
        return sum;
    }

};