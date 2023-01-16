class Solution
{
public:
    int calculateSum(int n)
    {
        int s = 0;
        while (n > 0)
        {
            s = s + n % 10;
            n /= 10;
        }
        return s;
    }
    int differenceOfSum(vector<int> &nums)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum1 = sum1 + calculateSum(nums[i]);
            sum2 = sum2 + nums[i];
        }
        if (sum1 >= sum2)
        {
            return (sum1 - sum2);
        }
        else
        {
            return (sum2 - sum1);
        }
    }
};