// LeetCode2089: Find Target Indices After Sorting Array
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        int n = nums.size();
        int stc = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < target)
            {
                stc++;
            }
            if (nums[i] == target)
            {
                c++;
            }
        }
        vector<int> ans(c, 0);
        for (int i = 0; i < c; i++)
        {
            ans[i] = stc;
            stc++;
        }
        return ans;
    }
};