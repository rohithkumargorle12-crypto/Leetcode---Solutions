class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int max = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (max < nums[i])
            {
                max = nums[i];
            }
        }
        int freq[max + 1];
        for (int i = 0; i < max + 1; i++)
        {
            freq[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int el = nums[i];
            freq[el]++;
        }
        for (int i = 1; i < max + 1; i++)
        {
            if (freq[i] > 1)
            {
                return i;
            }
        }
        return 0;
    }
};