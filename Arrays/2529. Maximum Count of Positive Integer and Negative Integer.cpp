// Leetcode 2529: Maximum Count of Positive Integer and Negative Integer
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int pCount = 0;
        int nCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                pCount++;
            }
            if (nums[i] < 0)
            {
                nCount++;
            }
        }
        if (pCount > nCount)
        {
            return pCount;
        }
        else
        {
            return nCount;
        }
    }
};