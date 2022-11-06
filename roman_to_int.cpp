#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {  //LVIII  MCMXCIV
    //   string roman[]={"I","V","X","L","C","D","M","IV","IX","XL","XC","CD","CM"};
    //   int val[]={1,5,10,50,100,500,1000,4,9,40,90,400,900};
        int i,l,sum=0;
        char s1,s2;
        l=s.size();
        for(i=0;i<l;i++){
            s1=s[i];
            s2=s[i+1];
            switch(s1){
                case 'I':
                    if(s2=='V'){
                        sum=sum+4;
                        i++;
                    }
                    else if(s2=='X'){
                        sum=sum+9;
                        i++;
                    }
                    else{
                        sum=sum+1;
                    }
                    break;
                case 'V':
                    sum=sum+5;
                    break;
                case 'X':
                    if(s2=='L'){
                        sum=sum+40;
                        i++;
                    }
                    else if(s2=='C'){
                        sum=sum+90;
                        i++;
                    }
                    else{
                        sum=sum+10;
                    }
                    break;
                case 'L':
                        sum=sum+50;
                    break;
                case 'C':
                    if(s2=='D'){
                        sum=sum+400;
                        i++;
                    }
                    else if(s2=='M'){
                        sum=sum+900;
                        i++;
                    }
                    else{
                        sum=sum+100;
                    }
                    break;
                case 'D':
                    sum=sum+500;
                    break;
                case 'M':
                    sum=sum+1000;
                    break;
                default: break;
            }
            
        }
        return sum;
        
    }
};

int main(){
    Solution ob;
    cout<<ob.romanToInt("MCMXCIV");
    return 0;
}