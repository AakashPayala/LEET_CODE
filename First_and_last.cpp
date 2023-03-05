#include <bits/stdc++.h> 


int first_pos(vector<int>arr,int n,int k){
int ans=-1;
int lb=0;
int ub=n-1;
while(lb<=ub){

    int mid=(ub+lb)/2;
    if(arr[mid]==k){
        ans=mid;
        ub=mid-1;
    }
    else if(arr[mid]>k){
        ub=mid-1;
    }
    else{
        lb=mid+1;
    }

}
return ans;


}


int last_pos(vector<int>arr,int n,int k){
int ans=-1;
int lb=0;
int ub=n-1;
while(lb<=ub){

    int mid=(ub+lb)/2;
    if(arr[mid]==k){
        ans=mid;
        lb=mid+1;
    }
    else if(arr[mid]>k){
        ub=mid-1;
    }
    else{
        lb=mid+1;
    }

}
return ans;


}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here

    pair<int,int>p;
    p.first=first_pos(arr,n,k);
    p.second=last_pos(arr,n,k);

    return p;
}
