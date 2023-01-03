// // note : brute force approach
// int findDuplicate(vector<int> &arr)
// {
//     // Write your code here
//     int n=arr.size();
// 	for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
// }

// optimised approach

// xor .

int findDuplicate(vector<int> &arr)
{
    // Write your code here
    int sol = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sol = sol ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {
        sol = sol ^ i;
    }

    return sol;
}
