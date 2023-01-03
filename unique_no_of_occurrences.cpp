// note : this is a brute force approach 



#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        int i = 0;
        int c = 1;
        vector<int> count;
        while (i < arr.size())
        {
            if (arr[i] == arr[i + 1])
            {
                c++;
            }
            else
            {
                cout<<arr[i]<< "  -> " << c<<endl;
                count.push_back(c);
                c = 1;
            }
            i++;
        }

        sort(count.begin(), count.end());
        int j = 0;
        while (j < count.size())
        {
            if (count[j] == count[j + 1])
            {
                return false;
            }
            j++;
        }
        return true;
    }
};

int main()
{
    Solution ob;
    vector<int>sample;
    sample={1,2,2,1,1,3,45345};
    cout<<ob.uniqueOccurrences(sample);
    return 0;
}
