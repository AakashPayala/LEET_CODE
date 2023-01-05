class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            int j = 0;
            while (nums1[i] != nums2[j])
            {
                j++;
            }
            int c = j, f = 0;
            while (c < nums2.size())
            {
                if (nums2[c] > nums1[i])
                {
                    f = 1;
                    break;
                }
                c++;
            }
            if (f == 1)
            {
                ans.push_back(nums2[c]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};