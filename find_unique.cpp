int findUnique(int *arr, int size)
{

    int sol=0;
    for(int i=0;i<size;i++){
        sol=sol^arr[i];

    }
    return sol;
   
}