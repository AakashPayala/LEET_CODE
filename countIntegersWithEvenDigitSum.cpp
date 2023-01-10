class Solution
{
public:
    int sum_of_digits(int d)
    {
        int s = 0;
        while (d > 0)
        {
            s = s + (d % 10);
            d /= 10;
        }
        return s;
    }
    int countEven(int num)
    {
        int c = 0;
        for (int i = 1; i <= num; i++)
        {
            int even = sum_of_digits(i);
            if (even % 2 == 0)
            {
                c++;
            }
        }
        return c;
    }
};