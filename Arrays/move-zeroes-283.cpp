// LeetCode283: Move Zeroes
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int l = nums.size();
        int j = 0;
        for (int i = 0; i < l; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};