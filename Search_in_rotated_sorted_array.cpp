int find_pivot(vector<int>& arr,int n){
    int s=0,e=n-1;
    int mid;
    while(s<e){
         mid=(s+e)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }

    return s;


}


int binarySearch(vector<int>& arr, int start,int end, int k){
    int s=start;
    int e=end;
    int mid=(s+e)/2;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;

}


int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.

    int pivot=find_pivot(arr,n);
    // cout<<"pivot = "<<pivot;
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }


    
    // Return the position of K in ARR else return -1.
}
