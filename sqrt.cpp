class Solution
{
public:
    int mySqrt(int x)
    {
        long ans = 0;
        while (ans * ans <= x)
        {
            ans++;
        }
        if (ans * ans == x)
        {
            return ans;
        }
        else
        {
            return ans - 1;
        }
    }
};