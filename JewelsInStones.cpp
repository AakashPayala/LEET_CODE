class Solution {
public:


    int numJewelsInStones(string jewels, string stones) {
        // sort(stones.begin(), stones.end());
        // sort(jewels.begin(), jewels.end());

        // cout<<stones<<endl<<jewels;
        // // cout<<sortString(stones);
        int c=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    c++;
                }
            }
        }

        // cout<<c;

    return c;
    }
};