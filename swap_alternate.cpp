#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a no: ";
    cin>>n;
    cout<<"enter "<<n<<" numbers: ";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2){
        //  ----imp if condition ----
        if(i+1<n){
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        }
        
    }

    cout<<"your new array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}